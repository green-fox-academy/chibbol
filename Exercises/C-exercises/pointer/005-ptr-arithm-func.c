#include <stdio.h>

int AddTwoNumbers(int *, int *);

int main()
{
    int fn, sn, sum;
    printf(" Pointer : Add two numbers using call by reference:\n");
    printf("---------------------------------------------------\n");

    printf("Insert first number: ");
    scanf("%d", &fn);
    printf("Insert second number: ");
    scanf("%d", &sn);
    sum = AddTwoNumbers(&fn, &sn);
    printf("The sum of the numbers is: %d", sum);

    return 0;
}

int AddTwoNumbers(int *n1, int *n2)
{
    int sum;
    sum = *n1 + *n2;
    return sum;
}

