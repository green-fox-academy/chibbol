#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "handling_tasks.h"

#define COMM_ADD "-a"
#define COMM_WR "-wr"
#define COMM_READ "-wr"
#define COMM_LI "-l"
#define COMM_EMP "-e"
#define COMM_REM "-r"
#define COMM_COMP "-r"
#define COMM_PRI "-p"
#define COMM_LP "-lp"


int main()
{
    StartMenu();

    char todo[120];

    char command[4];
    char comm_parse[3];


    while (1)
    {
        gets(command);
        strcpy(comm_parse, command);
        char *ptr;
        ptr = strtok(comm_parse, "\n");

        if (strstr(ptr, COMM_ADD)) {
            AddNewTodo(todo);

        }



    }

    return 0;
}
