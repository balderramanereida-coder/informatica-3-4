#include <stdio.h>

int main(void){
 //create variables for first snack (Boneless)
 //prices (3 items)
 // (chicken salad,tacos de birria,1litro de pozole)
 float price1 = 129.99;
 float price2 = 165.89;
 float price3 = 95.55;
 //Quantity available
 int quantity1 = 15;
 int quantity2 = 25;
 int quantity3 = 5;
 //selection code
 char code1= 'C';
 char code2= 'B';
 char code3= 'P';
//Menu format
 printf("Lilttle Snacks Vending Machine Stock\n");
 printf("-------------------------\n");
 printf("Item Name\tPrice\tQuantity\tSelection code\n");

 printf("Chicken Salad\t$%.2f\t%d\t\t%c\n",price1,quantity1,code1);
printf("Tacos de Birria\t$%.2f\t%d\t\t%c\n",price2,quantity2,code2);
printf("Boneless\t$%.2f\t%d\t\t%c\n",price3,quantity3,code3);
}
