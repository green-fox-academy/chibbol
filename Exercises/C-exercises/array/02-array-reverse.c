#include <stdio.h>

int main () {
    int n, i;
    int harray[100];

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("Input %d number of elements in the array: \n", n);

    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harray[i]);
    }

    printf("The values store into the array are : \n");
    for (i = 0; i < n; i++) {
        printf("% 5d", harray[i]);
    }
    printf("\nThe values store into the reversed array are : \n");
    //n - 1 = given array's length
    for (i = n - 1; i >= 0; i--) {
        printf("% 5d", harray[i]);
    }


    return 0;
}

