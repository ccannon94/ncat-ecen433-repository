#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile unsigned char a = 0x02;
	volatile unsigned char b = 0xFF;

	volatile unsigned char c,d,e,f;

	c = a|b;
	d = a&b;
	e = a^b;
	f = ~a;

	while(1);
}
