
#include <stdio.h>
#include <stdlib.h>


double min_2(float  x, float y){
if(x<y){
    return x;
}else{
    return y;
}
}

void min_4(float a, float b, float c, float d){
float min1=min_2(a,b);
float min2=min_2(c,d);



if(min1<min2){
    printf("min: %f \n",min1);
}else{
    printf("min: %f \n",min2);
}

}

double max_2(float x, float y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

void max_4(float a, float b, float c, float d){
    float max1=max_2(a,b);
    float max2=max_2(c,d);


    if(max1>max2){
        printf("max: %f \n",max1);
    }else{
        printf("max: %f \n",max2);
    }

}

int main()
{
   float a,b,c,d;
   printf("Give four floats: ");
   scanf("%f %f %f %f",&a,&b,&c,&d);

    min_4(a,b,c,d);
    max_4(a,b,c,d);
    printf("sum: %f \n",a+b+c+d);
    printf("mean: %f",(a+b+c+d)/4);
    return 0;
}
