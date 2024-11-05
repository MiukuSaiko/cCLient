#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "server.h"
#include "client.h"

int main(int argc, char *argv[]) {
    printf("Starting...\n");

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <server|client>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (strcmp(argv[1], "server") == 0) {
        printf("Starting server...\n");
        start_server();
    } else if (strcmp(argv[1], "client") == 0) {
        printf("Starting client...\n");
        start_client();
    } else {
        fprintf(stderr, "Invalid argument. Use 'server' or 'client'.\n");
        exit(EXIT_FAILURE);
    }

    printf("Exiting...\n");

    return 0;
}
