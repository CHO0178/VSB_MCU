/**
 * @brief lesson: digital to analog converter
 * try to generate periodically 3 states of value
 * 0V;(3.3/2)V;3.3V. Try to measure this on oscilloscope
 * generate sinusoidal signal to one of BNC connector
 * and measure it by oscilloscope.
 * @author Ing. Jan Choutka
 * @date 12.11.2024
 * @version 1
 */

#include "MKL25Z4.h"

#define DAC_MIN_VALUE		0u
#define DAC_HALF_VALUE		2048u
#define DAC_MAX_VALUE		4095u
#define DAC_WAIT_CYCLES		800000ul

void initDAC();
void setDACValue(uint16_t value);
void wait();

/*
DAC(ch.30)
	DAT				// analog value of base voltage in DAT multiples

	C0
		DACEN 		// DAC Enable
		DACRFS		// select reference voltage
		DACTRGSEL	// select trigger type
		DACSWTRG	// SW trigger

PORT
	PCR
		MUX		// multiplexer
*/

int main(void)
{
	initDAC();

	while(1)
	{
		// CZ: nastavte vystupni napeti na 0V
		// EN: set output voltage to 0V

		// CZ: zamestnejte procesor
		// EN: keep processor busy

		// CZ: nastavte vystupni napeti na (3.3/2)V
		// EN: set output voltage to (3.3/2)V

		// CZ: zamestnejte procesor
		// EN: keep processor busy

		// CZ: nastavte vystupni napeti na 3.3V
		// EN: set output voltage to 3.3V

		// CZ: zamestnejte procesor
		// EN: keep processor busy
	}
}

void initDAC()
{
	// CZ: nastavte napetovou referenci na DACREF_1 a typ trigru na SW
	// EN: set reference voltage to DACREF_1 and trigger type to SW

	// CZ: povolte vyuziti DAC
	// EN: enable DAC
}

void setDACValue(uint16_t value)
{
	// CZ: nastavte spodnich 8 bitu hodnoty do DATL
	// EN: set lower 8 bits of value to DATL

	// CZ: nastavte horni 4 bity hodnoty do DATH
	// EN: set upper 4 bits of value to DATH
}

void wait()
{
	// CZ: vytvorte prazdnou cekaci smycku
	// EN: create empty wait loop
}
