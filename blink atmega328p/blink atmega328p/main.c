/*
 * main.c
 *
 * Created: 9/14/2025 12:19:47 AM
 *  Author: edson macedo de almeida 
 */ 

#define F_CPU 16000000UL   // Define clock em 8 MHz (igual ao do seu MCU)
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;          // Configura todos os pinos do PORTB como saída
	PORTB = 0x00;         // Inicializa todos os pinos em LOW

	while (1)
	{
		PORTB |= (1 << 5);   // Liga LED no pino PB5 (Arduino UNO = LED_BUILTIN)
		_delay_ms(1000);

		PORTB &= ~(1 << 5);  // Desliga LED no PB5
		_delay_ms(1000);
	}
	return 0;
}
