#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

#define SERVER_IP 192.168.0.106
#define SERVER_PORT 55535
#define MSG_BUFF 1024

void error(char *msg)
{
    perror(msg);
    exit(1);
}

int main()
{
    /**Variables **/
    int sock, newsock, portnum, n;
    socklen_t clilen;
    struct sockaddr_in serv_addr;
    struct sockaddr_in client_addr;
    char buff[MSG_BUFF];
    //int rval;


    /**Create socket**/
    sock = socket(AF_INET, SOCK_STREAM, 0);

    bzero((char *)&serv_addr, sizeof(serv_addr));



    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(SERVER_PORT);

    /**Binding**/
    if (bind(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR binding.\n");

    /**Listen**/
    listen(sock, 3);
    clilen = sizeof(client_addr);


    newsock = accept(sock, (struct sockaddr *)&client_addr, &clilen);
    if (newsock < 0)
        error("ERROR on accept\n");

    bzero(buff, MSG_BUFF);
    n = read(newsock, buff, MSG_BUFF);
    if (n < 0)
        error("ERROR reading from socket.\n");
    printf("msg: %s", buff);
    n = write(newsock, buff, MSG_BUFF);
    if (n < 0) error("ERROR writing to socket");
    close(newsock);



    close(sock);
    return 0;
}
