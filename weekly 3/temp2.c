#include <stdio.h>

int main(void)
{

    float C;
printf("Enter temperature(Celsius): ");
scanf("%f",&C);
float F=(C*1.8)+32;
printf("%.2fC°= %.2fF°\n",C,F);

if (C <0) {
    printf("❄️ Freezing weather"); }
    else if (C <10) { printf("🥶 Very cold weather");}

    else if (C <20) { printf("🧥 Chilly weather\n");}
    else if (C <30) { printf("🖼️ Normal weather\n");}
    else if (C <40) { printf("☀️ Hot weather\n");}
    else if (C>40) { printf("🔥 Very hot weather\n");}
}



