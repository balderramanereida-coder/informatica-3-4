#include <stdio.h>

void c_to_f(void);
void f_to_c(void);


int main(void) {
    int user_response;
    printf("Temperature Converter\n");
    printf("Select an option:\n");
    printf("1.Celsius to Faheenheit\n");
    printf("2. Faherenheit to Celsius\n");
    scanf("%d",&user_response);

    if(user_response ==1) {
        c_to_f();
    } else if (user_response==2) {
        f_to_c();
    } else{ printf("Invalid option\n");

    }

}

//2. Definition
void c_to_f(void){
    float C;
printf("Enter temperature(Celsius): ");
scanf("%f",&C);
    float F=(C*1.8)+32;
printf("%.2fC°= %.2fF°\n",C,F);
}

void f_to_c(void){
    float F;
printf("Enter temperature(Fahrenheit): ");
scanf("%f",&F);
    float C=(F-32)/ 1.8;
printf("%.2fF°= %.2fC°\n",F,C);

}
