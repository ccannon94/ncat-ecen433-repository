#include <msp430.h> 

float fib[20];
int *fib_pointer;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	volatile int counter=2;

	fib[0] = 1;
	fib[1] = 1;

	while(counter<20){
	    fib[counter]=fib[counter - 1] + fib[counter - 2];
	    counter++;
	}

	*fib_pointer = fib[17];

	while(1);
}
