#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void Cesar_Encription_Int(char *messagepar)
{
    char encription[26];
    int key, k;
    fprintf(stderr, "Input key: ");
    scanf("%i", &key);

   for(int i=0; i<strlen(messagepar); i++)
    {
        for(int j=0; j<strlen(Alpha); j++)
        {
            if(messagepar[i] == Alpha[j])
                if(j+key < strlen(Alpha))
                    encription[i] = Alpha[j+key];
                else
                {
                    k = (j+key) - strlen(Alpha);
                    encription[i] = Alpha[k];
                }

        }
    }
    printf("Encripted: %s", encription);
    printf("\n");
}


void Cesar_Decription_Int(char *messagepar)
{
    char decription[26];
    int key, k;
    fprintf(stderr, "Input key: ");
    scanf("%i", &key);

    for(int i=0; i<strlen(messagepar); i++)
    {
        for(int j=0; j<strlen(Alpha); j++)
        {
            if(messagepar[i] == Alpha[j])
                if(j-key >= 0)
                    decription[i] = Alpha[j-key];
                else
                {
                    k = (j-k) + strlen(Alpha);
                    decription[i] = Alpha[k];
                }

        }
    }
    printf("\nDecripted: %s", decription);
    printf("\n");
}


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
    printf("\n");
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
    printf("\n");
}

