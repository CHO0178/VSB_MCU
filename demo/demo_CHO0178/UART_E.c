/**
 * @author Ing. Jan Choutka
 * @date 02.05.2024
 * @version 1
 * @brief example code for communication with computer using RS232.
 * Communication on computer side use putty with com speed: 115'200
 *
 */
/*
UART
	S1
		RDRF	// receive data register full flag
		TDRE	// transmit data register empty flag
	D			// data
	C2
		TIE		// transmit interrupt enable
		RIE		// receive interrupt enable
		TE		// transmitter enable
		RE		// receiver enable
	BDH
		SBR		// upper bits of speed
	BDL
		SBR		// lower bits speed


PORT
	PCR
		MUX


set speed to SBR 13
*/

#include "wdog.h"
#include "MKL25Z4.h"

#define UART1_EXPT_PRI		2u
#define UART1_SBR_115200	13u

volatile char txData;

void initComunication();

int main(void)
{
	wdog_init(WDOG_CONF_DIS);
	initComunication();

	while (1) {
		wdog_refresh();
	}
	return 0;
}

void initComunication()
{
	// CZ: nastavte vstupni multiplexer portu na periferii UART1
	// EN: set input multiplexer in port to UART1 peripherals

	// CZ: povolte preruseni z UART1 v NVIC
	// EN: allow NVIC for receiving interrupts from UART1

	// CZ: nastavte rychlost komunikace na 115200 Bd
	// EN: setup speed of communication to 115200 Bd

	// CZ: povolte preruseni od prijmu, vysilac a prijimac
	// EN: enable receive interrupt, transmitter and receiver
}

void __attribute__ ((interrupt)) UART1_IRQHandler(void)
{
	// CZ: pokud prisel znak, ulozte jej a povolte preruseni od vysilani
	// EN: if character was received, store it and enable transmit interrupt

	// CZ: pokud je vysilac pripraveny, poslete ulozeny znak zpet do pocitace
	// EN: if transmitter is ready, send stored character back to computer
}
