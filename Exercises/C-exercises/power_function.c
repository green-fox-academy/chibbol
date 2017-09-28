#include <stdio.h>
#include <stdlib.h>

int power(x, y);

int main ()
{
    int base = 0;
    int powa = 0;

    printf("base: ");
    scanf("%d", &base);
    printf("power: ");
    scanf("%d", &powa);

    power(base, powa);

    return 0;
}

int power(int x, int y)
{
    int sum = 0;

    for (int i = 0; i <= y; i++) {
            sum += x;
    }
    printf("%d ^ %d = %d", x, y, sum);
}

