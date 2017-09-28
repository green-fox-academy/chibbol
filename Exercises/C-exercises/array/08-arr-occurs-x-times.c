#include <stdio.h>

int main()
{
    int harray[100], fr[100];
    int i, j, n, ctr;

    printf("Input the number of elements to be stored in the array : \n");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);

    /**fill the array**/
    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harray[i]);
        fr[i] = -1;
    }

    for (i = 0; i < n; i++) {
        ctr = 1;
        for (j = i + 1; j < n; j++) {
            if (harray[i] == harray[j]) {
                ctr++;
                fr[j] = 0;
            }
        }
        if (fr[i] != 0) {
            fr[i] = ctr;
        }
    }

    printf("\nThe frequency of all elements of array : \n");
    for (i = 0; i < n; i++) {
        if (fr[i] != 0) {
            printf("%d occurs %d times\n", harray[i], fr[i]);
        }
    }

    return 0;
}

