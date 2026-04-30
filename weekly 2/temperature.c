#include <stdio.h>

int main(void)
{
    float F;
printf("Enter temperature(Farhenheit): ");
scanf("%f",&F);
float C=(F-32)/1.8;
    printf("%fF°= %fC°\n",F,C);
    //the number that is equal in F° and C° is= -40
}
