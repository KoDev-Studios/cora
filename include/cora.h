//
// Created by balpreet on 9/26/26.
//

#ifndef CORA_CORA_H
#define CORA_CORA_H
#include "string.h"
typedef struct cora_server {

} cora_server;

cora_server* cora_server_create();

void cora_server_bind(cora_server* server, char ip[], unsigned int port);


#endif //CORA_CORA_H
