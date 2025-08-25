// Gcd Of 2 num
#include <math.h>
#include <stdio.h>
int main(){
    int num1,num2;

    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);

    int ub = (num1 < num2) ? num1:num2;

    for(int i = ub;i > 0 ; i--){
        if(( num1 % i == 0  ) && ( num2 % i == 0)){
            printf("GCD of %d & %d: %d",num1,num2,i);
            break;
        }
    }
    return 0;

}