// check if prime or not
#include <stdio.h>
int main(){
    int a, factors = 1;
    printf("Enter #:");
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if (a % i == 0) {
            factors++;
        }
    }
    if (factors > 2){
        printf("Is not prime");
    }
    else{
        printf("Is prime");
    }
    return 0;
}