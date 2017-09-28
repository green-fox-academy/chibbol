#include <stdio.h>
#include <stdlib.h>

zeroOrNot(num);

int main()
{
    int number;

    printf("Which number would you like to test: ");
    scanf("%d", &number);

    switch (zeroOrNot(number)) {
    case 0:
        printf("This is an even number.");
        break;
    default:
        printf("This is an odd number.");
        break;
    }

    return 0;
}

int zeroOrNot(int num)
{
    int n;
    n = num % 2;

    return n;
}

