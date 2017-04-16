#include <msp430.h> 

unsigned long fib[7] = {19,20,21,22,23,24,25};
unsigned long *fib_pointer;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	int counter = 0;

	fib[0] = 4181;
	fib[1] = 6765;
	while(counter <8)
	{
	    fib[counter + 2] = fib[counter] + fib[counter+1];
	    counter++;
	}

	fib_pointer = fib;
	fib_pointer += 3;

	while(1);

}
