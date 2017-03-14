#include <msp430.h> 

int a = 0;
int *a_pointer;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int count;

	a_pointer = &a;

	for(count = 1; count < 10; count++)
	{
	    a_pointer++;
	    *a_pointer = count;
	}

	while(1);
}
