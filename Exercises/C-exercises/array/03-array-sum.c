#include <stdio.h>

int main()
{
    int i, n, sum;
    int harray[100];

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (i = 0; i < n; i++) {
        printf("\nelement [%d] : ", i);
        scanf("%d", &harray[i]);
    }
    for (i = 0; i < n; i++) {
        sum += harray[i];
    }
    printf("\nSum of all elements stored in the array is: %d", sum);
    return 0;
}

