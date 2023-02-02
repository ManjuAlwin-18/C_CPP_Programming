#include <stdio.h>

int main(void){
   int i,a[5];
   printf("Enter values");
   for (i=0; i<5;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("Enter Values are :");
   for(i=0;i<5;i++)
   {
    printf("%d\t",a[i]);
   }
   
    
}