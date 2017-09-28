#include <stdio.h>

int main()
{
    int fn, sn, sum;
    int *fp, *sp;
    printf("POINTER ARITHMETIC\n");
    printf("===================\n");
    printf("Insert first number: \n");
    scanf("%d", &fn);
    printf("Insert second number: \n");
    scanf("%d", &sn);

    fp = &fn;
    sp = &sn;

    sum = *fp + *sp;

    printf("The sum of the two entered number: %d", sum);

    return 0;
}

