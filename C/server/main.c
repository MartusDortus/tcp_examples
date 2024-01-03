#include <netdb.h>
#include <sys/socket.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

        int listenfd = 0, connfd = 0;
        struct sockaddr_in server;

        printf("\nSTART\n");

        listenfd = socket(AF_INET, SOCK_STREAM, 0);
        bind(listenfd, (struct sockaddr*)&server, sizeof(server));
        listen(listenfd, 10);

        while (1) {
                connfd = accept(listenfd, (struct sockaddr*)NULL, NULL);
        }

        printf("\nEND\n");
        return 0;
}
