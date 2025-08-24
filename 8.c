// check if palindrome
#include <stdio.h>

int main(){
    int a, ld, rev=0, temp=0;
    printf("Enter number:");
    scanf("%d",&a);
    temp = a;
    
    while( temp != 0){
        ld = temp % 10;
        temp = temp / 10;
        rev  = rev * 10 + ld;
        
    }
    if (a == rev){
        printf("%d Is Palindrome",rev);
    }
    else{
        printf("%d Is Not Palindrome",rev);
    }
    return 0;
}