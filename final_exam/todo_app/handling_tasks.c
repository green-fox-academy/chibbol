#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "handling_tasks.h"

#define TODO_LENGTH 120

/***************
* CLEAR SCREEN *
***************/

void clscr ()
{
    system("@cls || clear");
}


/*************
* START MENU *
*************/

void StartMenu ()
{
    clscr();
    printf("¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
    printf(": TO-DO application :\n");
    printf("¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤\n");
    printf("\nCommands:\n");
    printf("-a   Adds a new task\n");
    printf("-wr  Write current todos to file\n");
    printf("-rd  Read todos from a file\n");
    printf("-l   List all the tasks\n");
    printf("-e   Empty the list\n");
    printf("-r   Removes a task\n");
    printf("-c   Completes a task\n");
    printf("-p   Add priority to a task\n");
    printf("-lp  Lists all te thask by priority\n");
}

/*************************
* ADDING NEW TODO TO FILE*
**************************/

void AddNewTodo (char *todo_ptr)
{
    clscr();
    char todo[120];
    char new_todo[120];
    char *exit_ptr = NULL;
    *todo_ptr = NULL;



    FILE *fp;
    fp = fopen("todos.txt", "a");
    if (fp == NULL) {
        printf("Error while opening file");
        StartMenu();
    }

    printf("Enter your task:\n");
    gets(todo);
    strcpy(new_todo, todo);
    todo_ptr = strtok(new_todo, "\n");
    fprintf(fp, todo_ptr);
    fprintf(fp, "\n");
    printf("New task added.");

    fclose(fp);


}
