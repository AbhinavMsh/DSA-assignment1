// reverse a number
#include <stdio.h>
int main(){
    int a,ld=1;
    printf("Enter number:");
    scanf("%d",&a);
    
    while( a > 0){
        ld = a % 10;
        a = a / 10;
        printf("%d",ld);
        
    }

    return 0;
}