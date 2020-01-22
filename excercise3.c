#include <stdio.h>
#include <stdlib.h>


   void a(){

    int number1;
    printf("Give an integer:");
    scanf("%d",&number1);
    if(number1==0){

        printf(" The number you entered equals zero \n");

    }else{

        printf(" The number you entered does not equal zero \n");

    }}

    void b(){
        float float1,float2;
        printf("Give two floats:");
        scanf("%f %f",&float1,&float2);

        if(float1>float2){
           printf(" %f is the largest \n",float1);
        }else{
           printf(" %f is the largest \n",float2);
        }
    }


    void c(){

            int number2;
            printf("Give an integer:");
            scanf("%d",&number2);

            if(number2%2==0){
                printf(" Result is: %d \n",number2/2 );
            }else{
              printf(" Result is: %d \n",number2*3 );
            }
    }

    void d(){
        int number3,number4,number5;

        printf("Give three integers:");
        scanf("%d %d %d",&number3,&number4,&number5);
        if(number3==number4){
            printf(" Some numbers are equal \n");
        }else if(number3==number5){
            printf(" Some numbers are equal \n");
        }else if(number4==number5){
            printf(" Some numbers are equal \n");
        }else{
            printf(" All are unique \n");
        }
    }


int main()
{

   a();
   b();
   c();
   d();
    return 0;
}

