#include <stdio.h>
 
main()
{
   int a = 21;
   int c ;
   
   printf("a = %d\n", a );
 
   c =  a;
   printf("Line 1 - c = a 运算符实例，c 的值 = %d\n", c );
 
   c +=  a;
   printf("Line 2 - c +=  a 运算符实例，c 的值 = %d\n", c );
 
   c -=  a;
   printf("Line 3 - c -=  a 运算符实例，c 的值 = %d\n", c );
 
   c *=  a;
   printf("Line 4 - c *=  a 运算符实例，c 的值 = %d\n", c );
 
   c /=  a;
   printf("Line 5 - c /=  a 运算符实例，c 的值 = %d\n", c );
 
   c  = 200;
   c %=  a;
   printf("Line 6 -c  = 200  a  c %=  a 运算符实例，c 的值 = %d\n", c );
 
   c <<=  2;
   printf("Line 7 - c <<=  2 运算符实例，c 的值 = %d\n", c );
 
   c >>=  2;
   printf("Line 8 - c >>=  2 运算符实例，c 的值 = %d\n", c );
 
   c &=  2;
   printf("Line 9 - c &=  2 运算符实例，c 的值 = %d\n", c );
 
   c ^=  2;
   printf("Line 10 - c ^=  2 运算符实例，c 的值 = %d\n", c );
 
   c |=  2;
   printf("Line 11 - c |=  2 运算符实例，c 的值 = %d\n", c );
 
}
