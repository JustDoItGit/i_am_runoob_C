#include <stdio.h>

int test(int,int); // 形参，只声明

int main()
{
    int a,b;
    printf("%d\n",test(5,3)); // 实参，已赋值
}

int test(int a,int b) // 形参
{
    a=a+b;
    return a;
}

