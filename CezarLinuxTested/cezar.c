#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funct.h"

            
int main(int argc, char *argv[])
{
    char *program = argv[0];
    char *option = argv[1];
    char *message = argv[2];

    if(argc == 1)
    {
        fprintf(stderr, "%s: no options and message.\n", program);
        exit(3);
    }

    if(argc == 2)
    {
        fprintf(stderr, "%s: no options or message.\n", program);
        exit(2);
    }

    if(argc == 3)
    {
        if(strcmp(option, "-Encript") == 0) Cesar_Encription_Int(message);
        if(strcmp(option, "-Decript") == 0) Cesar_Decription_Int(message);

        if(strcmp(option, "-EncriptABC") == 0) Cesar_Encription(message);
        if(strcmp(option, "-DecriptABC") == 0) Cesar_Decription(message);
    }
    else
    {
        fprintf(stderr, "%s: illegal option: %s\n", program, option);
        exit(1);
    }
    exit(0);
}

