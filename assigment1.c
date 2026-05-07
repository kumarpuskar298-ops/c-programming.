#include<stdio.h>

int main()
{

    float radius, perimeter, area;
    const float pi=3.14159;
    printf("enter the radius");
    scanf("%f",&radius);

    perimeter=2*pi*radius;
    area=pi*radius*radius;

    printf("perimeter of the circle= %f\n",perimeter);
    printf("Area of the circle= %f",area);

}
