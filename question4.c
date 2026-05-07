#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,sum;

    printf ("enter marks of each subject");
    printf ("sub1:");
    scanf ("%f", &sub1);
    printf ("sub2:");
    scanf ("%f", &sub2);
    printf ("sub3:");
    scanf ("%f", &sub3);
    printf ("sub4:");
    scanf ("%f", &sub4);
    printf ("sub5:");
    scanf ("%f", &sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    printf("aggrigate marks= %f\n", sum);
    printf("percentage= %f",(sum/500.0)*100);


}
