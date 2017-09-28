#include <string.h>
#include <stdio.h>

/** Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

 enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
 };



 struct car {
    char mf_name[255];
    float euro_price;
    int yr_of_mf;
    enum transmission trnsm;
 };


struct car array[5];

int get_older_cars_than(struct car* array, int array_length, int age)
{
    int year_max = 2017 - age;
    int ctr = 0;

    for (int i = 0; i < array_length; i++) {
        if (array[i].yr_of_mf < year_max) {
            ctr++;
        }
    }
    return ctr;
}

int get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
{
    int ctr = 0;
    for (int i = 0; i < array_length; i++) {
        if (array[i].trnsm == trnsm) {
            ctr++;
        }
    }
    return ctr;
}


int main() {

    int age;
    int trm;
    enum transmission t = trm;

    struct car anna = {"Volvo", 200, 2001, MANUAL};
    struct car bela = {"Renault", 200, 2007, CVT};
    struct car ceci = {"Opel", 200, 2011, DUAL_CLUTCH};
    struct car dia = {"Volvo", 200, 1999, MANUAL};
    struct car emma = {"Tesla", 20000, 2011, AUTOMATIC};

    array[0] = anna;
    array[1] = bela;
    array[2] = ceci;
    array[3] = dia;
    array[4] = emma;


    printf("Enter the required age: ");
    scanf("%d", &age);
    printf("We have %d older cars than %d.\n", get_older_cars_than(array, 5, age), age);
    printf("×××××××××××××××××××××××××××××××××\n");
    printf("Choose a transmission type:\n");
    printf("1 = MANUAL, 2 = AUTOMATIC, 3 = CVT, 4 = SEMI_AUTOMATIC, 5 = DUAL_CLUTCH\n");
    scanf("%d", &trm);

        switch (trm)
    {
    case 1:
        trm = MANUAL;
        break;
    case 2:
        trm = AUTOMATIC;
        break;
    case 3:
        trm = CVT;
        break;
    case 4:
        trm = SEMI_AUTOMATIC;
        break;
    case 5:
        trm = DUAL_CLUTCH;
        break;
    default:
        printf("Wrong input!");
        break;
    }

    printf("We have %d cars of your choice.", get_transmission_count(array, 5, trm));

    return 0;
}

