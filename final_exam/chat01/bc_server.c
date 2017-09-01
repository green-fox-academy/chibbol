/****************
*   BROADCAST   *
****************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <errno.h>
#include <pthread.h>

#include "main.h"

int main(int argc, char *argv[])
{
    int bc_serv_sock;
    struct sockaddr_in bc_serv_addr;
    char buf[512];

    /**Create socket*/
    bc_serv_sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (bc_serv_sock == -1)
        perror("Error: socket failed.\n");


    bzero((char *) &bc_serv_sock, sizeof(bc_serv_sock));

    /**Fill bc server!s socks*/
    bc_serv_addr.sin_family = AF_INET;
    bc_serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    bc_serv_addr.sin_port = htons(atoi(argv[1]));



    return 0;

}
