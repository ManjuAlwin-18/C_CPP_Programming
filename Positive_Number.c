#include <stdio.h>

int main(void){
     int number;
     printf("Enter a Number");
     scanf("%d",&number);
     if (number<0){
        printf("Number is Negative Number");
     }else{
        printf("Number is Positive Number");
     }
    return 0;
}