//
// Created by balpreet on 9/26/26.
//

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include "socket.h"
cora_socket_t cora_socket_create() {
    return socket(AF_INET, SOCK_STREAM, 0);
}

int cora_socket_bind(cora_socket_t socket_fd, const char *ip, uint16_t port) {
    struct sockaddr_in address;
    memset(&address, 0, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    if (ip == NULL) {
        address.sin_addr.s_addr = htonl(INADDR_ANY);
    } else {
        if (inet_pton(AF_INET, ip, &address.sin_addr) != 1) {
            return -1;
        }
    }
    return bind(
        socket_fd,
        (struct sockaddr *)&address,
        sizeof(address)
    );


}
int cora_socket_listen(
    cora_socket_t socket_fd,
    int backlog
)
{
    return listen(socket_fd, backlog);
}

void cora_socket_close(cora_socket_t socket_fd)
{
    close(socket_fd);
}