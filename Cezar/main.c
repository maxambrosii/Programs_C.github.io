#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    char messege[20];
    int keyy;

    printf("msg: ");
    scanf("%s", &messege);
    printf("key: ");
    scanf("%i", &keyy);

    int yn;
    do
    {
    Menu();
        printf("\nYour choice: ");
        scanf("%i", &yn);
        switch(yn)
        {
        case 1 :
        {
            printf("msg: ");
            scanf("%s", &messege);
            printf("key: ");
            scanf("%i", &keyy);
        }
        break;
        case 2:
            Inc(messege, keyy);
            break;
        case 3:
            Dec(encription, keyy);
            break;

        }
    }
    while (yn != 4);
    return 0;
}
