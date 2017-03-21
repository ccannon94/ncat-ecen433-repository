#include <msp430.h> 

unsigned int fib[200];

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    volatile int i;
        fib[0] = 5;
        fib[1] = 8;

        for(i = 2; i < 200; i = i +1){
            fib[i] = fib[i-1] + fib[i-2];
        }

        while(1);
}
