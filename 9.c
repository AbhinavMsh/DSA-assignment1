// celcius to farenheit
#include <stdio.h>
int main(){
    float cel,far=1;
    printf("Enter Value:");
    scanf("%f",& cel);

    far = ((9.0/5.0) * cel) + 32;

    printf("Fahrenheit:%f",far);
    
    return 0;

}