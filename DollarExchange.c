#include<stdio.h>

int main (){

   const float JPY = 127.65;
   const float GBP = 0.79; 

   float exchange_rate, USD;
   printf("pleas input the total amount of US Dollar: ");
   scanf("%f", &USD);

   exchange_rate = (USD/10);
   printf("Exchange_rate = %f\n", exchange_rate);
   USD = USD - exchange_rate;
}