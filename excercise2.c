
#include <stdio.h>
#include <stdlib.h>

 void sum(){
     int integer_1,integer_2;
     printf("Give two integers: ");
     scanf("%d",&integer_1);
     scanf("%d",&integer_2);
     printf(" You entered %d and %d, their sum is: %d \n",integer_1,integer_2,integer_1+integer_2);
 }

 void product(){
    float float_1,float_2;
    printf("Give two floats: ");
    scanf("%f",&float_1);
    scanf("%f",&float_2);
    printf("You entered %f and %f, their product is: %f \n",float_1,float_2,float_1*float_2);
 }

 void print_string(){
    char str[100];
    printf("Give a word: ");
    scanf("%s",str);
    printf("%s %s \n",str,str);
 }



int main()
{

    sum();
    product();
    print_string();

    return 0;
}
