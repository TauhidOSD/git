#include<stdio.h>
int main(){
float fahrenheit,celsius;
printf("Enter the value of fahrenheit:\n");
scanf("%f",&fahrenheit);
celsius = (fahrenheit-32)*5/9;
printf("The value of celsius is:\n");
printf("%.2f fahrenheit = %.2f celsius\n",fahrenheit,celsius);
return 0;
}
