//
// Created by balpreet on 9/26/26.
//
#include <stdio.h>
#include <stdlib.h>

#include "cora.h"

int cora_server_bind(cora_server* server, char ip[],unsigned int port) {

    snprintf(server->bind_ip_v4, sizeof(server->bind_ip_v4), "%s", ip);
    server->port = port;
    server->SOCKET_BACKLOG = 128;

    server->socket = cora_socket_create();
    cora_socket_listen(server->socket, server->SOCKET_BACKLOG);

    return 0;
}

int cora_server_start(cora_server* server) {

}


