#include <stdio.h>

int main ()
{
    int harr[5] = {4, 2, 6, 8, 7};
    int total = 0;

    for (int i = 0; i < 5; i++) {
        total += harr[i];
    }

    printf("The total of : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", harr[i]);
    printf("\nis: %d", total);

    return 0;
}

