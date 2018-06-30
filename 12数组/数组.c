#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n[10];
	int i,j;

	for (i = 0; i < 11; ++i)
	{
		n[i] = i + 100;
	}
	for (j = 0; j < 13; ++j)
	{
		printf("Elment[%d] = %d\n", j,n[j]);
	}

	return 0;
}
