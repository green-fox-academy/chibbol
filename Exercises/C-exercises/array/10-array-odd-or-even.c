#include <stdio.h>

int main ()
{
    int harray[100], odd[100], even[100];
    int i, n;
    int j = 0, k = 0;

    printf("Input the number of elements to be stored in the array: \n");
    scanf("%d", &n);
    printf("Input %d elements in the array: \n", n);

    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", &harray[i]);
    }

    /**sorting odd and even numbers**/
    for (i = 0; i < n; i++) {
        if (harray[i] % 2 == 0) {
            even[j] = harray[i];
            j++;
        } else {
            odd[k] = harray[i];
            k++;
        }
    }
    printf("\nThe even numbers are: \n");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\nThe odd numbers are: \n");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

