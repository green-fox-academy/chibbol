#include <stdio.h>

int doubleInteger (int *);

int main()
{
    int num;
    int *p;

    printf("Enter a num to make it double: ");
    scanf("%d", &num);
    printf("num : %d\n", num);
    p = &num;
    doubleInteger(p);
    printf("num*2 : %d\n", *p);


    return 0;
}

int doubleInteger(int *n)
{
    *n *= 2 ;
}

