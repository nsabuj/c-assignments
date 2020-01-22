

#include <stdio.h>
#include <stdlib.h>

void print_initial_array(int arr[]){
    int i;
    printf("Initial array: {");
    for(i=0; i<10; i++)
    {
        if(i==9){
            printf(" %d ", arr[i]);
        }else{
           printf(" %d,", arr[i]);
        }


    }
    printf("}");
}

void zero_counter(int arr[]){

    int i,count = 0;

    for( i = 0; i < 10; ++i){
        if(arr[i] == 0){

            count++;
        }

    }

    printf("\nNumber of 0's: %d", count);

}


void print_array_triple(int arr[]){
     int i;
    printf("\nTripled array: {");
    for(i=0; i<10; i++)
    {
        if(i==9){
            printf(" %d ", arr[i]*3);
        }else{
           printf(" %d,", arr[i]*3);
        }


    }
    printf("}");
}

int main(){
    int i;
    int arr[10];
    printf("Input 10 numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    print_initial_array(arr);
    zero_counter(arr);
    print_array_triple(arr);

    return 0;

}
