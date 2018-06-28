# include <stdio.h>

/* 声明函数 */
int max(int num1, int num2);

int main()
{
    /* 局部变量定义 */
    int a = 100;
    int b = 200;
    int ret;

    /* 调用函数来获取最大值 */
    ret = max(a, b);
    printf("Max value is : %d\n", ret);
    return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2)
{
    /* 声明局部变量 */
    int result;
    if(num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}
