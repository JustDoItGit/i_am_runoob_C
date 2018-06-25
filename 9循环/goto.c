#include <stdio.h>
 
int main ()
{
   /* 局部变量定义 */
   int a = 10;

   /* do 循环执行 */
   target:do
   {
      if( a == 15)
      {
         /* 跳过迭代 */
         a = a + 1;
         goto target;
      }
      printf("a 的值： %d\n", a);
      a++;
     
   }while( a < 20 );
 
   return 0;
}
