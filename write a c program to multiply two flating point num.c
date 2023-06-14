#include<stdio.h>
int main(){
    float a,b,multiply=0;
    printf("Enter the two floating point num:\n");
    scanf("%f%f",&a,&b);
    multiply =a*b;
    printf("The value of multiply is :\n");
    printf("%.3f*%.3f=%.3f",a,b,multiply);
    return 0;
}
