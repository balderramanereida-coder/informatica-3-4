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

printf("The movie will last %dhr and %dmin\n",h,m);
printf("End time: %d:%d\n", endh,endm);



}
