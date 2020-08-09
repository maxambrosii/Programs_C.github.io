#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void Cesar_Encription(char *messagepar)
{
    char encription[26];
    int  k, j = 0, m1 = 0, m2 = 0, x = 0;
    char key[26];
    fprintf(stderr, "Input key: ");
    scanf("%s", &key);

   for(int i=0; i<strlen(messagepar); i++)
    {
        for(k=0; k<strlen(Alpha); k++)
        {
			if(messagepar[i] == Alpha[k]) m1 = k;
			if(key[j] == Alpha[k]) m2 = k;
        }
		
		x = (m1 + m2) % strlen(Alpha);
		encription[i] = Alpha[x];

		if(j==strlen(key)-1) j = 0;
		else j++;
	}
    printf("Encripted: %s", encription);
    printf("\n");
}


void Cesar_Decription(char *messagepar)
{
    char decription[26];
    int  k, j = 0, m1 = 0, m2 = 0, x = 0;
    char key[26];
    fprintf(stderr, "Input key: ");
    scanf("%s", &key);

    for(int i=0; i<strlen(messagepar); i++)
    {
        for(k=0; k<strlen(Alpha); k++)
        {
			if(messagepar[i] == Alpha[k]) m1 = k;
			if(key[j] == Alpha[k]) m2 = k;
        }
		
		x = (m1 - m2 + 26) % strlen(Alpha);
		decription[i] = Alpha[x];

		if(j==strlen(key)-1) j = 0;
		else j++;
	}

    printf("\nDecripted: %s", decription);
    printf("\n");

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
        if(strcmp(option, "-EncriptVigen") == 0) Cesar_Encription(message);
        if(strcmp(option, "-DecriptVigen") == 0) Cesar_Decription(message);
    }
    else
    {
        fprintf(stderr, "%s: illegal option: %s\n", program, option);
        exit(1);
    }
    exit(0);
}
