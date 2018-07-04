#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x:y;
}

int main(int argc, char const *argv[])
{
	/* p 是指针函数 */
	int(*p)(int, int) = &max;
	int a,b,c,d;

	printf("请输入三个字：\n");
	scanf("%d %d %d", &a,&b,&c);

	/* 与直接调用函数等价，d = max(max(a, b), c) */
	d = p(p(a,b),c);
	printf("最大的数字是：%d\n", d);
	return 0;
}
