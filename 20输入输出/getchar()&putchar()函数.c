#include <stdio.h>

int main()
{
	int c;
	printf("Enter a vaule: ");
	c = getchar();
	// 错误写法getchar(c);
	printf("\nYou entered: ");
	putchar(c);
	printf("\n");
	return 0;
}
