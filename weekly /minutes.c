#include <stdio.h>

int main(void)
{

   int rt;

printf("Enter movie running time in minutes: ");
scanf("%d",&rt);
  int sh;
  int sm;
printf("Start time: ");
scanf("%d:%d", &sh,&sm);
//cuando se ponen comillas en scanf nos referimos a lo que queremos obtener

 int h= rt/60;
 int m= rt % 60;

 int endh = sh + h;
 int endm = sm + m;

 if (endm >=60) {
   endh= endh + ( endm/ 60) ;
   endm= endm % 60; // we use this types of ifs so we can round the numbers and adapt them to the 60 minutes that the clock uses. thats why we divide.
  }

printf("The movie will last %dhr and %dmin\n",h,m);
printf("End time: %d:%02d\n", endh,endm);


}

