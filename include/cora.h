//
// Created by balpreet on 9/26/26.
//

#ifndef CORA_CORA_H
#define CORA_CORA_H

#include "string.h"
#include "../src/platform/socket.h"
typedef struct cora_server {
    int port;
    char bind_ip_v4[16];
    int SOCKET_BACKLOG;
    cora_socket_t socket;
} cora_server;

int cora_server_bind(cora_server* server, char ip[], unsigned int port);
int cora_server_get(cora_server* server, char path[], int (*handler)());
int cora_server_start(cora_server* server);
int cora_server_stop(cora_server* server);

#endif //CORA_CORA_H
