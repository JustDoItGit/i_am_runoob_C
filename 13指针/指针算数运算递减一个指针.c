#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
	int var[] = {10, 100, 200};
	int i, *ptr;

	/* 指针中最后一个元素的地址 */
	ptr = &var[MAX -1];
	for ( i = MAX; i > 0; --i)
	{
		printf("存储地址：var[%d] = %x\n", i - 1,ptr);
		printf("存储值：var[%d] = %d\n", i -1,*ptr);

		/* 移动到下一个位置 */
		ptr--;

	}
	return 0;
}
