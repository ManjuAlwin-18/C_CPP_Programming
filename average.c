#include <stdio.h>

int main(void){
    float number1,number2,number3,average;
    printf("Enter Three Numbers");
    scanf("%f%f%f",&number1,&number2,&number3);
    average=(number1+number2+number3)/3;
    printf("Result is : %f",average);
    return 0;
}