#include <stdio.h>

int main()
{
    int harr[100], i, n;

    printf("Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------\n");
    printf("Input the number of elements to store in the array: \n");
    scanf("%d", &n);

    printf("Input %d number of elements in the array: \n");
    for (i = 0; i < n; i++) {
        printf("element [%d] - ", i);
        scanf("%d", harr + i);
    }
    printf("The elements you entered are : \n");
    for (i = 0; i < n; i++) {
        printf("element [%d] - %d\n", i, *(harr + i));
            }

    return 0;
}
/************************* *
* '*(harr + i) <-- pointer *
***************************/
