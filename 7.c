// generate fibonacci series
#include <stdio.h>

int main(){
    int ld=1,ld2=0,n,temp=0;
    printf("Enter number:");
    scanf("%d",&n);
    if (n ==0 || n == 1){
        printf("%d",n);
    }
    else{
        printf("%d ",ld2);
        printf("%d ",ld);
        for(int i = 2;i < n ; i++){
            temp = ld;
            ld = ld+ld2;
            ld2 = temp;
            printf("%d ",ld);  
        }
    }
    return 0;
}
