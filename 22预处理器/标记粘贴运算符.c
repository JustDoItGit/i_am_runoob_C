#include <stdio.h>

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

int main(void)
{
    int token34 = 40;

    tokenpaster(34);
    return 0;
}
