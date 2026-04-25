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
 printf("Item name: Chicken Salad\n");
 printf("Price: $%.2f\n",price1);
 printf("Quantity available: %d\n",quantity1);
 printf("Selection code: %c\n",code1);
 printf("\n");
 printf("Item name: Tacos de Birria\n");
 printf("Price: $%.2f\n",price2);
 printf("Quantity available: %d\n",quantity2);
 printf("Selection code: %c\n",code2);
 printf("\n");
 printf("Item name: Pozole\n");
 printf("Price: $%.2f\n",price3);
 printf("Quantity available: %d\n",quantity3);
 printf("Selection code: %c\n",code3);
}
