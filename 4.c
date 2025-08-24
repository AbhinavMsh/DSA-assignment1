// sum of First N numbers
#include <stdio.h>

int main(){
    int a,sum=0;

    printf("Enter num:");
    scanf("%d",&a);

    for (;a>0;a--){
        sum = sum + a;

    }
    printf("%d", sum);
    return 0;
}