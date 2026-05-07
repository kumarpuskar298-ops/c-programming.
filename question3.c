 #include <stdio.h>
int main()
{


    float km, meters, feets, inches, centimeter;

    printf("enter distance in kilometers:");
    scanf("%f", &km);

    meters= km * 1000 ;
    feets =  meters*3.28084 ;
    inches = feets * 12 ;
    centimeter =  km * 100000 ;

    printf("distance in meters = %.2f\n", meters);
    printf("distance in feets = %.2f\n", feets);
    printf("distance in inches = %.2f\n", inches);
    printf("distance in centimeter = %.2f\n", centimeter);




}
