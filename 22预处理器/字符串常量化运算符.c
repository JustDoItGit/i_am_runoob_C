#include <stdio.h>

#define message_for(a, b) printf(#a " and " #b ": We love you!\n")

int main()
{
	message_for(Carole, Debra);
	return 0;
}
