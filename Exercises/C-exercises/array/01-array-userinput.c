#include <stdio.h>

int main ()
{
    int harr[10];
    int i;

    //printing out the index of 'harr' array
    //and putting the values for indexes
    for (i = 0; i < 10; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &harr[i]);
    }
    //get items of the 'harr' array
    //when the filling is ended
    for (i = 0; i < 10; i++) {
        printf("%d ", harr[i]);
    }
    printf("\n");
    
    return 0;
}

