#include <stdio.h>

int main()
{
    int harray1[100], harray2[100];
    int i, n;

    printf("Input the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++) {
        printf("element [%d]: ", i);
        scanf("%d", &harray1[i]);
    }

    printf("\nThe elements stored in the first array are: \n");
    for (i = 0; i< n; i++) {
        printf("%d ", harray1[i]);
    }

    //Copy the first array's element into harray2
    for (i=0; i < n; i++) {
    //the target at first!!!!
        harray2[i] = harray1[i];
    }

    printf("\nThe elements copied into the second array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", harray2[i]);
    }



    return 0;
}

