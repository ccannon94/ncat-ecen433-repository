#include <msp430.h> 

/*
 * main.c
 */
void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    //Set Pin 1.0 (LED1) to output, all others input
	P1DIR = 0x01;
	//Set LED1 to off
	P1OUT = 0x01;

	volatile int ledState = 1;

	while(1)
	{
	    int counter = 0;

	    P1OUT = 0x01;

	    if(counter % 10 == 0)
	    {
	        P1OUT = 0x00;
	    }

	    __delay_cycles(50000);

	    counter++;
	}
}
