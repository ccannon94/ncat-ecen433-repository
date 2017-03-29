#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    volatile int a = 10;
    volatile int mask = 0x0003;
    volatile int y = 0xFFFF;

    while(a > 4)
    {
        a -= 1;
        y = (y^mask)&a;
    }

	while(1);
}
