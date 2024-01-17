#include <stdio.h>
#include <cs50.h>
#include <string.h>

/**
 * This converts a number from a positive decimal (whole number)
 * To a binary number (bitstring). 
 * @author Ken Loomis 
 */
int main(void)
{	
    int value = get_int( "Enter a whole number: " );
    int bitVal;
    // Create a string that has room for 32 characters (+ the terminating
    // character).
	char bitstring [33];
    // Fill the array with 0s
    for ( int i =0; i<32; i++ ){
        bitstring[i] = '0';
    } 
    // Put a the terminating character at the end of the array.
    bitstring[32] = '\0';
    // As long as there are still bits needed to make up the
    // bitstring, keep dividing. Built the bitstring from
    // the right to the left.

    // Print it when you are done.
    printf ( "%s\n", bitstring );
	return 0;
}
