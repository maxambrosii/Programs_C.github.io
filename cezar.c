#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


void Cesar_Encription(char *messagepar)
{
    char encription[26];
    char key[50];
    fprintf(stderr, "Input key: ");
    scanf("%s", &key);

    strcat(key, Alpha);

    for(int i=0; i<strlen(key); i++)
    {
        for(int j=i+1; j<strlen(key); j++)
        {
            if(key[j] == key[i])
                for(int k = j; k<strlen(key); k++)
                    key[k] = key[k+1];
        }
    }

    int cash;
    for(int i=0; i<strlen(messagepar); i++)
    {
        for(int j=0; j<strlen(Alpha); j++)
        {
            if(messagepar[i] == Alpha[j])
            {
                cash = j % strlen(Alpha);
                encription[i] = key[cash];
            }
        }
    }

    printf("Encripted: %s", encription);
}


void Cesar_Decription(char *messagepar)
{
    char decription[26];
    char key[50];
    fprintf(stderr, "Input key: ");
    scanf("%s", &key);


    strcat(key, Alpha);

    for(int i=0; i<strlen(key); i++)
    {
        for(int j=i+1; j<strlen(key); j++)
        {
            if(key[j] == key[i])
                for(int k = j; k<strlen(key); k++)
                    key[k] = key[k+1];
        }
    }

    int cash;
    for(int i=0; i<strlen(messagepar); i++)
    {
        for(int j=0; j<strlen(key); j++)
        {
            if(messagepar[i] == key[j])
            {
                cash = j % strlen(key);
                decription[i] = Alpha[cash];
            }
        }
    }

    printf("Decripted: %s", decription);

}

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
        if(strcmp(option, "-Encript") == 0) Cesar_Encription(message);
        if(strcmp(option, "-Decript") == 0) Cesar_Decription(message);
    }
    else
    {
        fprintf(stderr, "%s: illegal option: %s\n", program, option);
        exit(1);
    }
    exit(0);
}

