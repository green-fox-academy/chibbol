#include <stdio.h>

int swaap(int *, int *);

int main()
{
    int x = 10;
    int z = 20;

    printf("x: %d\tz: %d\n", x, z);

    swaap(&x, &z);
    printf("x: %d\tz: %d", x, z);

    return 0;
}

int swaap(int *xp, int *zp)
{
    int temp;

    temp = *xp;
    *xp = *zp;
    *zp = temp;
}

