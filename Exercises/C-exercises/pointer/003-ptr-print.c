#include <stdio.h>

int main()
{
    int m = 300;
    float fx = 300.60;
    char cht = 'z';
    /**pointers**/
    int *ptr1 = &m;
    float *ptr2 = &fx;
    char *ptr3 = &cht;

    printf("Using & operator :\n");
    printf("-----------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("\n");
    printf("Using & and * operator :\n");
    printf("-----------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %.2f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    printf("\n");
    printf("Using only pointer variable :\n");
    printf("-----------------------\n");
    printf("address of m = %p\n", ptr1);
    printf("address of fx = %p\n", ptr2);
    printf("address of cht = %p\n", ptr3);

    printf("\n");
    printf("Using only pointer operator :\n");
    printf("-----------------------\n");
    printf("value at address of m = %d\n", *ptr1);
    printf("value at address of fx = %.2f\n", *ptr2);
    printf("value at address of cht = %c\n", *ptr3);

    return 0;
}

