#include <stdio.h>
int main(void)
{
    int a=5; // = means assignment
    int b=5;
    int c=10; // We created three variables

    printf("%d == %d is %d \n",a,b, a==b);
    printf("%d == %d is %d \n",a,c, a==c); // == means comparison
    printf("%d ! == %d is %d \n",a,c, a !=c);

    //program that identifies negative numbers
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number < 0) // we use "if" when we want to specify an action with our variable
     {
        // when we add "{}" that means that we are inserting information that are related with our indications about the "if"
        printf("%d is a negative number. \n",number);
    } else { printf("%d is a positive number. \n",number);
     }
}
