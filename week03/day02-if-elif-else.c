#include <stdio.h>
#include <stdlib.h>

// Define the TOTORO macro which holds a number
#define TOTORO 5

int main()
{
    // Use the #if, #elif, #else macros

    // If the TOTORO macro is greater than 3 print out "Greater than 3"
    #if TOTORO > 3
        printf("Greater than 3.\n");
     // TOTORO
    // If the TOTORO macro is lower than 3 print out "Lower than 3"
	#elif TOTORO < 3
        printf("Lower than 3.\n");
	 // TOTORO
	// Else print out "TOTORO is 3"
	#else
        printf("TOTORO is 3.\n");
	#endif

    return 0;
}

