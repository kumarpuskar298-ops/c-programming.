#include <stdio.h>
int main (){

float totalsellingprice, totalcostprice, totalprofit, costpriceperitem;

printf ("total selling price of 15 item");
scanf ("%f", &totalsellingprice);
printf (" the total profit earned on 15 item");
scanf ("%f", &totalprofit);

totalcostprice= totalsellingprice-totalprofit;

costpriceperitem= totalcostprice/15;

printf ("the price of per item = %f\n", costpriceperitem);
















}
