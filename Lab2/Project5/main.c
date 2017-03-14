#include <msp430.h> 

int a = 3;
int *a_pointer;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	a_pointer = &a;
	*a_pointer = 5;

	while(1);
}
