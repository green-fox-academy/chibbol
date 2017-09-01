#include <stdio.h>
#include <stdlib.h>
#define TOTORO 19

// Define the TOTORO macro which holds the number of students in our class

int main()
{
    // Use the #ifdef and #ifndef macros!
    #ifndef TOTORO
        printf("%d", 32);
    #endif // TOTORO
    // If the TOTORO macro is not defined print out 32
    #ifdef TOTORO
        printf("%d", TOTORO);
    #endif // TOTORO
    // If the TOTORO macro is defined print out it's value

    return 0;
}

