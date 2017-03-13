#include <msp430.h> 

int a = 1;

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
	int b = 2;
	int c;
	c = a+b;

	while(1);
}
