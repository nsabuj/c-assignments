#include <stdio.h>
#include <stdlib.h>

void print_even_number(){
    printf("Even numbers between 0 and 40: \n");
    int i=0;
    while(i<41){
     if(i%2==0){
        printf("%d ",i);
     }
     i++;
    }
}

void print_to_hundred(){
    printf("\nNumbers 1 to 100: \n");

    int j=1;
    while(j<100){
     int k;
       for(k=j;k<j+10;k++){
            if(k<10){
                printf(" %d ",k);
            }else{
                printf("%d ",k);
            }
       }
     printf("\n");
     j=j+10;
    }
}


void print_square(){
    int number_to_square;


    jump:
    printf("Give a number: ");
    scanf("%d",&number_to_square);
    if(number_to_square!=0){
        printf("The square of %d is %d \n",number_to_square,number_to_square*number_to_square);
        goto jump;

    }else{
       printf("You entered zero. \n");
    }
}






int main()
{

    print_even_number();
    print_to_hundred();
    print_square();

    return 0;
}

