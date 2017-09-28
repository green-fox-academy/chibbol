#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 300
#define STEP 20

int main()
{
    float fahr;
    //float input;

    printf("Enter a num: \n");
    scanf("%f", &fahr);
    printf("This is your chosen Fahrenheit: %.2f\n", fahr);

    printf("Your Fahr in Celsius is: %.2f", (5.0/9.0)*(fahr-32));
 /*   for (fahr = MIN; fahr <= MAX; fahr += STEP) {
        printf("Fahr: %.1f\tCelsius: %.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
*/
    return 0;
}

