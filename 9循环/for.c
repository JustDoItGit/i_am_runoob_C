#include <stdio.h>
int main()
{
   int a = 10;
   /* for 循环执行 */
   for(a = 10; a < 20; a = a + 1 )
   {
      printf("a 的值： %d\n", a);
   }
 
   return 0;
}

/* 要用gcc -std=c99 来编译
{
    for(int a = 10; a < 20; a++)
    {
	printf("a 的值：%d\n", a);
    }
    return 0;
}
*/

