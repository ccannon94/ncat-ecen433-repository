#include <msp430.h> 

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int a = 32767;
	volatile int b;
	volatile unsigned int c = 0xFFFF;
	volatile unsigned char d = 0x00;
	volatile int e = 10;
	volatile float f = 10.1;
	volatile int g = 0;
	volatile float h = 0.0;

	a += 1;
	b = 17.2;
	c += 0x0001;
	d -= 0x01;
	e /= 0;
	f /= 0;
	g /= g;
	h /= h;

	while(1);
}
