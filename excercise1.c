#include <stdio.h>
#include <stdlib.h>



int main()
{
char s[5]='hello';

int length = strlen(s);

if(length%2==0){
    printf('%s%s',s[(length/2)-1],s[(length/2) );
}
}

