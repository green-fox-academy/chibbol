#include <stdio.h>

int main()
{
    int m = 10;
    int n, o;
    int *ptr = &m;

    printf("ptr stores the address of m = %p\n", ptr);
    printf("*ptr stores the value of m = %d\n", *ptr);
    printf("&m is the address of m = %p\n", &m);
    printf("&n stores the address of n = %p\n", &n);
    printf("&o stores the address of o = %p\n", &o);
    printf("&ptr stores the address of ptr = %p\n", &ptr);


    return 0;
}

