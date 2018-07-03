#include <stdio.h>

/* 函数声明 */
double getAverage(int *arr, int size);

int main(int argc, char const *argv[])
{
  /* 带有5个元素的整形数组 */
  int balance[5] = {1000, 2, 3, 17, 50};
  double avg;

  /* 传递一个指向数组的指针作为参数 */
  avg = getAverage(balance, 5);

  /* 输出返回值 */
  printf("Average value is: %f\n", avg);
  return 0;
}

double getAverage(int *arr, int size)
{
  int i,sum = 0;
  double avg;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  avg = (double)sum / size;
  return avg;
}
