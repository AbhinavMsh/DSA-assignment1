// Larger of two numbers 
#include <stdio.h>
int main(){
    int a,b;

    printf("Enter First num:");
    scanf("%d",&a);
    printf("Enter second num:");
    scanf("%d",&b);

    if (a > b) {
        printf("%d is greater",a);
    }
    else{
        printf( "%d is greater",b);
    }
    return 0;
}