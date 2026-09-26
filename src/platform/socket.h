//
// Created by balpreet on 9/27/26.
//

#ifndef CORA_SOCKET_H
#define CORA_SOCKET_H
#include <stdint.h>
#ifdef _WIN32
    typedef uintptr_t cora_socket_t;
#else
typedef int cora_socket_t;
#endif

#define CORA_INVALID_SOCKET ((cora_socket_t) - 1)

cora_socket_t cora_socket_create(void);
int cora_socket_bind(
    cora_socket_t socket,
    const char *ip,
    uint16_t port
);
int cora_socket_listen(
    cora_socket_t socket,
    int backlog
);
void cora_socket_close(cora_socket_t socket);

#endif //CORA_SOCKET_H
