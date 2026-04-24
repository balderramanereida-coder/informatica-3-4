#include <stdio.h>

int main(void)
{
     int length;
     int width;


     printf("what is the heigth of the rectangle: ");
     scanf("%d",&length);
     printf("What is the witdth of the rectangle: ");
     scanf("%d", &width);
     int area= length*width;
     int perimeter=2*(length+width);
     printf("Area=%d\n",area);
     printf("Perimeter=%d\n",perimeter);

    }
