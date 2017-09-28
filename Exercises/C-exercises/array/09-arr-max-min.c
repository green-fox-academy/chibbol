#include <stdio.h>

int main()
{
    int harray[100];
    int i, max, min, n;

    printf("Input the number of elements to be stored in the array\n");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);
    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harray[i]);
    }

    /**finding max and min**/
    max = harray[0];
    min = harray[0];

    for (i = 0; i < n; i++) {
        if (harray[i] > max) {
            max = harray[i];
        }
        if (harray[i] < min) {
            min = harray[i];
        }
    }
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}


