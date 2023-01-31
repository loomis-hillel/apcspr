#include <stdio.h>
#include <cs50.h>
#include <string.h>

/**
 * This converts a number from binary (as a bitstring) to a  
 * decimal (whole number). 
 * @author Ken Loomis
 */
int main(void)
{	
	int value = 0;
    int bitVal = 1;
	string bitstring = get_string( "Enter a binary number: " );
	int length = strlen ( bitstring );
	for ( int i=length-1; i >= 0; i-- ) {
		if ( bitstring[i] == '1' ) {
			value = value + bitVal; 
		}
		bitVal = bitVal * 2;
	}

    printf ( "%i\n", value );
	return 0;
}