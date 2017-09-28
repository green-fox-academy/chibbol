#include <stdio.h>

/**
 * Create a function that prints out the fist "N" positive odd numbers.
 * It should take the "N" number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as parameter:
 *   1, 3, 5, 7, 9
 *
 * Non-positive "N" numbers should be treated as errors, handle it!
 */
void first_odd(int n) {

    /*int i = 1;

    while  (i <= n) {
        printf("%d ", i);
        i += 2;
        n++;
    }*/

/********************************************************/

   /* int array[255];

    for (int i = 0; i < n * 2; i++) {
        array[i] = i;
    }

    for (int i = 0; i < n * 2; i++) {
        if (array[i] % 2 == 1) {
            printf("%d ", array[i]);
        }
    }*/
/*********************************************************/

    /*for (int i = 0; i <= n * 2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }*/

/*******************************************************/

    /*for (int i = 0; i < n; i++) {
            printf("%d ", i * 2 + 1);
    }
*/
/*****************************************************/

    /*for (int i = 1; i <= n * 2; i += 2) {
        printf("%d ", i);
    }*/

/****************************************************/

  /*  for (int i = 0; i <= n*2; i++) {
        if (i & 1)
            printf("%d ", i);
    }
*/
/****************************************************/

    for (int i = 0; i <= n*2; i++) {
        i & 1 ? printf("%d ", i): i;
    }

}


int main ()
{
    int number = 0;

    printf("Please enter the required number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Wrong data!");
        exit(-1);
    }

    first_odd(number);


}

