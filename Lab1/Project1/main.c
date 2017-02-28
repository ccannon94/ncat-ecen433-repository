#include <msp430.h> 

int d = 0;

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int a =1;
    float b = -255.25;
	char c = 'c';
	d = d+1;

	while(1);
}
