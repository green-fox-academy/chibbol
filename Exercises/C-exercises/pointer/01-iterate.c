#include <stdio.h>

int main()
{
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    char *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %c\n", i, ptr[i]);
    }

    return 0;
}
