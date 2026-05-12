#include <stdio.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);



int main(void) {
    int user_response;
    printf("Simple Calculator\n");
    printf("Select an option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d",&user_response);

    if(user_response ==1) {
        addition();
    }
    else if (user_response==2) {
        subtraction();
    }
    else if (user_response==3) {
        multiplication();
    }
    else if (user_response==4) {
        division();
    }
    else { printf("Invalid option\n");
    }

}

//2. Definition
void addition(void){
    float n1;
    float n2;
printf("Enter number 1: ");
scanf("%f",&n1);
printf("Enter number 2: ");
scanf("%f",&n2);
    float A=n1+n2;
printf("%.2f+%.2f=%2.f\n",n1,n2,A);
}

void subtraction(void){
    float n1;
    float n2;
printf("Enter number 1: ");
scanf("%f",&n1);
printf("Enter number 2: ");
scanf("%f",&n2);
    float S=n1-n2;
printf("%.2f-%.2f=%2.f\n",n1,n2,S);
}

void multiplication(void){
    float n1;
    float n2;
printf("Enter number 1: ");
scanf("%f",&n1);
printf("Enter number 2: ");
scanf("%f",&n2);
    float M=n1*n2;
printf("%.2f*%.2f=%2.f\n",n1,n2,M);
}

void division(void){
    float n1;
    float n2;
printf("Enter number 1: ");
scanf("%f",&n1);
printf("Enter number 2: ");
scanf("%f",&n2);
    float D=n1/n2;
printf("%.2f/%.2f=%.2f\n",n1,n2,D);
}

