#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
#include <string.h>



int main()
{


    printf("msg: ");
    scanf("%s", &messege);
    printf("key: ");
    scanf("%s", &key);

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
            scanf("%s", &key);
        }
        break;
        case 2:
            Inc(messege, key);
            break;
        case 3:
            Dec(encription, key);
            break;

        }
    }
    while (yn != 4);
}
