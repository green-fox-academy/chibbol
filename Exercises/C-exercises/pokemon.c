#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 enum p_type{
    NORMAL,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTING,
    POISON,
    GROUND,
    FLYING,
    PSYCHIC,
    BUG,
    ROCK,
    GHOST,
    DRAGON,
    DARK,
    STEEL,
    FAIRY
 };


 typedef struct {
    char name[255];
    int years;
    float strength;
    float speed;
    enum p_type type;
 }pokemon;

 //pokemon p_array[5];

 int get_faster_than(pokemon *p_array, int arr_length, float speed)
 {
    int ctr = 0;

    for (int i = 0; i < arr_length; i++) {
        if (p_array[i].speed > speed)
            ctr++;
    }

    return ctr;
 }



int get_type_count(pokemon *p_array, int arr_length, enum p_type type)
{
    int ctr = 0;

    for (int i = 0; i < arr_length; i++) {
        if (p_array[i].type == type)
            ctr++;
    }
    return ctr;
}



enum p_type get_strongest_type(pokemon *p_array, int arr_length)
{
    enum p_type strongest_type;
    strongest_type = p_array[0].strength;

    for (int i = 0; i < arr_length; i++) {
        if (p_array[i].strength > strongest_type) {
            strongest_type = p_array[i].type;
        }
    }
    return strongest_type;
}


float get_max_strength_of_a_type(pokemon *p_array, int arr_length, enum p_type type)
{
    float strongest;
    strongest = p_array[0].strength;

    for (int i = 0; i < arr_length; i++) {
        if (p_array[i].type == type) {
            if (p_array[i].strength > strongest) {
                strongest = p_array[i].strength;
            }
        }

    }
    return strongest;
}


int main() {
/*
    pokemon pichu = {"Pichu", 1, 3.5, 5.6, ELECTRIC};
    pokemon pikachu = {"Pikachu", 2, 4.5, 4.6, ELECTRIC};
    pokemon raichu = {"Raichu", 3, 6.7, 5.6, ELECTRIC};
    pokemon eevee = {"Eevee", 1, 5.0, 6.4, NORMAL};
    pokemon squirtle = {"Squirtle", 2, 5.5, 6.6, WATER};


    p_array[0] = pichu;
    p_array[1] = pikachu;
    p_array[2] = raichu;
    p_array[3] = eevee;
    p_array[4] = squirtle;*/

    pokemon pokemons[] = {
        {"Pichu", 1, 3.5, 5.6, ELECTRIC},
        {"Pikachu", 2, 4.5, 4.6, ELECTRIC},
        {"Raichu", 3, 6.7, 5.6, ELECTRIC},
        {"Eevee", 1, 5.0, 6.4, NORMAL},
        {"Squirtle", 2, 5.5, 6.6, WATER}
    };

    int len = sizeof(pokemons) / sizeof(pokemon);

    printf("faster pokemon than 5.0 = %d\n", get_faster_than(pokemons, len, 6.0));
    printf("number of pokemon type 'ELECTRIC' = %d\n", get_type_count(pokemons, len, ELECTRIC));
    printf("the strongest type is %d \n", get_strongest_type(pokemons, len));
    printf("max strength of type ELECTRIC: %.2f", get_max_strength_of_a_type(pokemons, len, ELECTRIC));

    return 0;
}

