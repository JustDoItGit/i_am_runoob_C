#include <stdio.h>

int main(int argc, char const *argv[])
{
  int var;
  int *ptr;
  int **pptr;

  var = 3000;

  /* 获取var的地址 */
  ptr = &var;

  /* 使用运算符 & 获取ptr的地址*/
  pptr = &ptr;

  /* 使用pptr 获取值*/
  printf("Value of var = %d\n", var);
  printf("Value available at *ptr = %d\n", *ptr);
  printf("Value available at **pptr = %d\n", **pptr);
  printf("Value available at *pptr = %d\n", *pptr);
  return 0;
}
