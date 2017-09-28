#include <stdio.h>

int main()
{
    int harr1[100], harr2[100], harr3[200];
    int n1, n2, n3;
    int i, j, k;

    /**filling harr1**/
    printf("Input the number of elements to be stored in the first array: \n");
    scanf("%d", &n1);
    printf("Input %d elements in the array: \n", n1);
    for (i = 0; i < n1; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harr1[i]);
    }

    /**filling harr2**/
    printf("Input the number of elements to be stored in the second array: \n");
    scanf("%d", &n2);
    printf("Input %d elements in the array: \n", n2);
    for (i = 0; i < n2; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harr2[i]);
    }

    /**the size of merged array**/
    n3 = n1 + n2;
    /****merging the two arrays into the third one****/
    for (i = 0; i < n1; i++) {
        harr3[i] = harr1[i];
    }
    for (j = 0; j < n2; j++) {
        harr3[i] = harr2[j];
        i++;
    }


    /*****sorting the third array*****/
    for (i = 0; i < n3; i++) {
        for (j = 0; j < n3 - 1; j++) {
            if (harr3[j] >= harr3[j + 1]) {
                k = harr3[j+1];
                harr3[j+1] = harr3[j];
                harr3[j] = k;
            }
        }
    }

    printf("\nThe merged array in ascending order is: \n");
    for (i = 0 ; i < n3; i++) {
        printf("%d ", harr3[i]);
    }


    return 0;
}

