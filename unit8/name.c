#include <stdio.h>
#include <cs50.h>
#include <string.h>

/**
 * name.c
 *
 * Accepts the user's name as input and prints
 * the characters in the name one line at a time.
 *
 * @author Ken Loomis
 */
int main(void)
{	
	int count, length;
	string name = get_string( "Enter your name: " );
	length = strlen ( name );
	for(count = 0; count < length; count++)
	{
		printf ( "%c\n", name[count] );
	}
	return 0;
}
