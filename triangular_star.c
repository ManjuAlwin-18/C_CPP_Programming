#include <stdio.h>

int main(void){
   int i,j,num=5;
    for (i = num; i >=1; --i)
    {
      for(j=1; j<=i; j++){
        printf("*");
      }
      printf("\n");
    }
   
    
}