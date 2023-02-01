#include <stdio.h>

int main(void){
    int i,n=10;
    for (i=2; i<=n; i++)
    {
        if (i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}