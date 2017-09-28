#include <stdio.h>

int main() {

    int harray[100];
    int i, j, n, count = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array: ", n);

    //put data in the array
    for (i= 0; i < n; i++) {
        printf("\nelement [%d]: ", i);
        scanf("%d", &harray[i]);
    }

    printf("\nTotal number of duplicate elements found in the array is: \n");

    //searching for duplicates
    for (i = 0; i < n; i++) {
        for (j = i; j <= n; j++) {
            if (harray[i] == harray[j]) {
                count++;
                break;
            }
        }
    }
    printf(" %d", count);

    return 0;
}


