#include <stdio.h>
#include <stdlib.h>

int main()
{   int number,i;

    repeat:
        printf("Give a number: ");
        scanf("%d",&number);
        for(i=1;i<=number;i++){
            printf("%d \n",i);
        }
        char decision;
        printf("Run again (y/n)? ");
        scanf(" %c",&decision);
        if(decision=='y'){
            goto repeat;
        }else{
        printf("Exiting...");
        }

    return 0;
}

