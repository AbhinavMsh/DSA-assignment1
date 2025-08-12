// Factorial 
#include <stdio.h>

int main(){
    int a=1,fact=1;

    printf("Enter num:");
    scanf("%d",&a);

    for (; a > 0; a--) {
        fact = fact * a;
    }

    printf("%d",fact);
    return 0;


}