#include <stdio.h>
int main()
{
	int num;

	printf("输入一个数字:");
	scanf("%d", &num);
	/* scanf("%d", num); 错误写法 */
	/*int* ptr;
	ptr = &num;
	scanf("%d", *ptr); 也是错误写法*/
	(num%2==0)?printf("偶数"):printf("奇数");
}
