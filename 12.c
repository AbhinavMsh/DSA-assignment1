// count digit
#include <stdio.h>

int main(){
    int num, dg=0;

    printf("Enter Num:");
    scanf("%d",&num);
    if (num == 0) {
        dg = 1;
    }
    else{
        while (num > 0){
            num = num / 10;
            dg++; 
        }
    }    
    printf("%d",dg);
    
    return 0;
}