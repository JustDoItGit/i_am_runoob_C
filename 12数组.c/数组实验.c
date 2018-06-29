#include <stdio.h>

/*
 * 会报错，数组内类型不能混用
 * 警告：字符常量大小超出其类型 [默认启用]
 *   balance[6] = 'hello';
 *    */
int main(int argc, char const *argv[])
{
	double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
	balance[6] = 'hello';
	printf("%s\n", balance[6]);
	return 0;
}
