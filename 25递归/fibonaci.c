#include <stdio.h>

int fibonaci(int i)
{
    if (i <= 1)
    {
        return i;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
    int i;
    for (i = 0; i< 10; i++)
    {
        printf("%d\t\n", fibonaci(i));
    }
    return 0;
}

/* 递归是一个简洁的概念，同时也是一种很有用的手段。但是，使用递归是要付出代价的。与直接的语句(如while循环)相比，递归函数会耗费更多的运行时间，并且要占用大量的栈空间。递归函数每次调用自身时，都需要把它的状态存到栈中，以便在它调用完自身后，程序可以返回到它原来的状态。未经精心设计的递归函数总是会带来麻烦。*/
