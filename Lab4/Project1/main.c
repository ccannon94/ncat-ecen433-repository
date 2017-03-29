#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int a = 4;
	volatile int mask = 0x0003;
	volatile int y = 0xFFF;

	while(a)
	{
	    a -= 1;
	    y = (y^mask)&a;
	}

	while(1);
}
