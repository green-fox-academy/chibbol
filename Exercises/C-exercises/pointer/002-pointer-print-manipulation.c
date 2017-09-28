#include <stdio.h>

int main()
{
    int m = 29;
    int *ab;

    printf("Address of m = %p\n", &m);
    printf("Value of m = %d\n", m);
    ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %d\n", *ab);
    m = 34;
    printf("The value of m is assigned to %d now.\n", m);
    printf("Address of pointer ab: %p\n", ab);
    printf("Content of pointer ab: %d\n", *ab);
    *ab = 7;
    printf("The pointer variable ab is assigned with the value %d now.\n", m);
    printf(" Address of m : %p\n", ab);
    printf(" Value of m : %d\n", *ab);



    return 0;
}

