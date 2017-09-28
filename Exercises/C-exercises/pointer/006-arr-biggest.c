#include <stdio.h>

int main()
{
    int n1, n2;
    int *fp = &n1, *sp = &n2;
    printf(" Pointer : Find the maximum number between two numbers :\n");
    printf("=========================================================\n");
    printf("First num: ");
    scanf("%d", fp);
    printf("Second num: ");
    scanf("%d", sp);

    if (*fp > *sp) {
        printf("Biggest number is: %d", *fp);
    } else {
        printf("Biggest number is: %d", *sp);
    }


    return 0;
}

