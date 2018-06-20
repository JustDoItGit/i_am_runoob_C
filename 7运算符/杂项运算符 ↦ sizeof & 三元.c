#include <stdio.h>
 
int main()
{
   int a = 4;
   short b;
   double c;
   int* ptr;
 
   /* sizeof 运算符实例 */
   printf("Line 1 - 变量 a = 4 的大小 = %lu\n", sizeof(a) );
   printf("Line 2 - 变量 short  b 的大小 = %lu\n", sizeof(b) );
   printf("Line 3 - 变量 double c 的大小 = %lu\n", sizeof(c) );
 
   /* & 和 * 运算符实例 */
   ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
   printf("ptr = &a: \n");
   printf("a 的值是 %d\n", a);
   printf("*ptr 是 %d\n", *ptr);
 
   /* 三元运算符实例 */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "b = (a == 1) ? 20: 30; a=10, b 的值是 %d\n", b );
 
   b = (a == 10) ? 20: 30;
   printf( "b = (a == 10) ? 20: 30; a= 10, b 的值是 %d\n", b );
}
