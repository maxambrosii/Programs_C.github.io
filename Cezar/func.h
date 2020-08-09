#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

char Alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i,j,k;
char encription[25];
char decription[25];

void Inc(char msg[], int key)
{

    for(i=0; i<strlen(msg); i++)
    {
        for(j=0; j<strlen(Alpha); j++)
        {
            if(msg[i] == Alpha[j])
                if(j+key < strlen(Alpha))
                    encription[i] = Alpha[j+key];
                else
                {
                    k = (j+key) - strlen(Alpha);
                    encription[i] = Alpha[k];
                }

        }
    }
    printf("enc: %s", encription);
    printf("\n\n");

}


void Dec(char ec[], int key)
{

    for(i=0; i<strlen(ec); i++)
    {
        for(j=0; j<strlen(Alpha); j++)
        {
            if(ec[i] == Alpha[j])
                if(j-key >= 0)
                    decription[i] = Alpha[j-key];
                else
                {
                    k = (j-k) + strlen(Alpha);
                    decription[i] = Alpha[k];
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

#endif // FUNC_H_INCLUDED
