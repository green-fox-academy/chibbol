#include <stdio.h>

int main()
{
    int n, harray[100];
    int i, j, k, counter;

    printf("Input the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);

    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harray[i]);
    }

    printf("\nThe unique elements found in the array are: \n");

    for (i = 0; i < n; i++) {
        counter = 0;
        //check before i
        for (j = 0; j < i - 1; j++) {
            if (harray[i] == harray[j]) {
                counter++;
            }
        }
        for (k = i + 1; k < n; k++) {
            if (harray[k] == harray[i]) {
            counter++;
            }
        }
    if (counter == 0) {
        printf("%d ", harray[i]);
    }

    }


    return 0;
}


