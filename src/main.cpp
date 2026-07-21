/*
 * Name: main.cpp
 * Author: You
 *
 * This is a stub. Write your code here.
 *
 */

extern "C" { // Allow C functions to be called from C++ code
	#include "wdog.h"
	#include "littleHelper.h"
	#include "MKL25Z4.h"
}

__attribute__ ((weak)) int main(void)
{
	wdog_init(WDOG_CONF_DIS);

	while (1) {
		wdog_refresh();
	}

	return 0;
}