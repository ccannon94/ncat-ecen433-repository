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

	while(1){
	    if((P1IN && 0x08) == 0x00)
	    {
	        P1OUT = 0x00;
	    }else
	    {

	    }
	}
}
