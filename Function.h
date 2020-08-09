#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i,j,k;
static char encription[26];
static char decription[26];
char messege[26];
char key[26];


void Inc(char msg[], char key1[])
{

    strcat(key1, Alpha);

    for( i=0; i<strlen(key1); i++)
    {
        for(j=i+1; j<strlen(key1); j++)
        {
            if(key1[j] == key1[i])
                for( k = j; k<strlen(key1); k++)
                    key1[k] = key1[k+1];
        }
    }

    int cash;


    for(i=0; i<strlen(msg); i++)
    {
        for(j=0; j<strlen(Alpha); j++)
        {
            if(msg[i] == Alpha[j])
            {
                cash = j % strlen(Alpha);
                encription[i] = key1[cash];
            }

        }
    }

    printf("enc: %s", encription);
    printf("\n\n");

}


void Dec(char ec[], char key11[])
{

    strcat(key11, Alpha);

    for( i=0; i<strlen(key11); i++)
    {
        for(j=i+1; j<strlen(key11); j++)
        {
            if(key11[j] == key11[i])
                for( k = j; k<strlen(key11); k++)
                    key11[k] = key11[k+1];
        }
    }

    int cash;
    for(i=0; i<strlen(ec); i++)
    {
        for(j=0; j<strlen(key11); j++)
        {
            if(messege[i] == key11[j])
            {
                cash = j % strlen(key11);
                decription[i] = Alpha[cash];
            }
        }
    }

    printf("\ndeco: %s", decription);
    printf("\n\n");

}

void Menu()
{
    printf("\n1 - Change message.");
    printf("\n2 - Show encription.");
    printf("\n3 - Show decription.");
    printf("\n4 - Exit.");
}



#endif // FUNCTION_H_INCLUDED
