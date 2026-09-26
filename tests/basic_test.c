#include <assert.h>
#include <stdlib.h>

#include "cora.h"
//
// Created by balpreet on 9/26/26.
//
int main(void) {
    cora_server server;

    cora_server_bind(&server,"0.0.0.0",25565);
    return 0;
}