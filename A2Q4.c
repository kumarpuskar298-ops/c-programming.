#include<stdio.h>

int main(){

int minutes, hours,minutesx;

printf("enter time of minutes");
scanf("%d" ,&minutes);
hours=minutes/60;
minutesx=minutes%60;

printf("hours= %d\n" ,hours);

printf("Minutes= %d" ,minutesx);



}
