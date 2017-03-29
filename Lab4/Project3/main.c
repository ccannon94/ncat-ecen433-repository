#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    volatile int a = 0;
    volatile int mask = 0x0003;
    volatile int y = 0xFFFF;

    for(a = 0; a < 10; a++)
    {
        y = (y^mask)&a;
    }

    while(1);
}
