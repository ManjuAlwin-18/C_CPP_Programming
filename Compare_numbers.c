#include <stdio.h>

int main(void){
     int number1,number2;
     printf("Enter 2 Numbers");
     scanf("%d%d",&number1,&number2);
     if (number1<number2){
        printf("%d is Greater Number",number2);
     }else if (number2<number1)
      {
        printf("%d is Greater Number",number1);
     }else{
        printf("%d is equal to %d",number1,number2);
     }
    return 0;
}