#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int count;
	volatile int y[5];
	volatile int x[] = {1,1,0,1,1};
	volatile int h[] = {1,-1,0,0,0};

	for(count = 0; count < 5; count ++)
	{
	    y[count] = x[count]*h[4 - count];
	}

	while(1);
}
