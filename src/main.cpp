/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2021 Jason Skuby (mytechtoybox.com)
 */

// Pi Pico includes
#include "pico/stdlib.h"
#include "pico/bootrom.h"
#include "pico/multicore.h"

// Pio includes
#include "pio_usb.h"

// GP2040 includes
#include "gp2040.h"
#include "gp2040aux.h"

// Keyboard includes
#include "keyboard.h"

usb_device_t *usb_device = NULL;
bool keyboardUp = false;
bool keyboardDown = false;
bool keyboardLeft = false;
bool keyboardRight = false;

// Launch our second core with additional modules loaded in
void core1() {
	multicore_lockout_victim_init(); // block core 1

	// To run USB SOF interrupt in core1, create alarm pool in core1.
	static pio_usb_configuration_t config = PIO_USB_DEFAULT_CONFIG;
	config.alarm_pool = (void*)alarm_pool_create(2, 1);
	usb_device = pio_usb_host_init(&config);

	// Create GP2040 w/ Additional Modules for Core 1
	GP2040Aux * gp2040Core1 = new GP2040Aux();
	gp2040Core1->setup();
	gp2040Core1->run();
}

int main() {
	// Create GP2040 Main Core (core0), Core1 is dependent on Core0
	GP2040 * gp2040 = new GP2040();
	gp2040->setup();

	// Create GP2040 Thread for Core1
	multicore_launch_core1(core1);

	// Start Core0 Loop
	gp2040->run();
	return 0;
}
