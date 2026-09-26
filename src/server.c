//
// Created by balpreet on 9/26/26.
//
#include <stdio.h>
#include <stdlib.h>

#include "cora.h"

cora_server* cora_server_create() {
    printf("Hello world\n");
    cora_server *server = malloc(sizeof(cora_server));
    return server;
}



