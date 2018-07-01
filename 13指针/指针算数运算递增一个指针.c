#include <stdio.h>

const int MAX = 3;

int main(int argc, char const *argv[])
{
	int var[] = {10, 100, 200};
	int i, *ptr;

	/* 指针中的数组地址 */
	ptr = var;
	for ( i = 0; i < MAX; ++i)
	{
		printf("存储地址：var[%d] = %p OR %x\n", i,ptr,ptr);
		printf("存储值：var[%d] = %d\n", i,*ptr);

		/* 移动到下一个位置 */
		ptr += 1;

	}
	return 0;
}
