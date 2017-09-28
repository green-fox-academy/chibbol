#include <stdio.h>

struct Room;
struct House;

void printHouse(struct House house);

struct Room createRoom(char *name, float width, float length, float height);


struct House {
    char *address;
    struct Room *rooms[10];
};

struct Room {
    float width;
    float length;
    float height;
    char *name;

};

int main()
{
    int i;

    struct House h;
    h.address = "Tabor u 3";
    for (i = 0; i < 10; i++) {
        h.rooms[i] = NULL;
    }

    struct Room hall;
    hall.width = 10.0;
    hall.length = 12.0;
    hall.height = 9;
    hall.name = "Hall";

    h.rooms[0] = &hall;
    h.rooms[1] = createRoom("Lounge", 12.0, 8.0, 7.0);

    printHouse(h);


    return 0;
}

struct Room createRoom(char *name, float width, float length, float height)
{
    struct Room r;
    r.width = width;
    r.length = length;
    r.height = height;
    r.name = name;

    return r;
}



void printHouse(struct House house)
{
    printf(house.address);
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        if (house.rooms[i] != NULL)
        {
           /** struct Room room = *house.rooms[i];
            printf("Room #%d: %s\n", i+1, room.name);*/
            //or we can do this:
            printf("Room #%d: %s\n", i+1, house.rooms[i]->name);

        }
    }
}

