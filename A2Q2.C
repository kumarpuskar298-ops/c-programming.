#include<stdio.h>

int main()
{

    float radius, volume;
    const float pi=3.14159;

    printf("enter the radius");
    scanf("%f",&radius);

    volume =(4*pi*radius*radius*radius)/3;

    printf("the volume of sphere = %f",volume);




}
