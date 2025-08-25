// average of N
#include <stdio.h>
int main(){
    int n,total=0,mean=0;
    
    printf("Enter number of elements:");
    if (scanf("%d", &n) != 1 || n <= 0) { // if the user enters a valid integer, scanf returns 1
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;  
    } 
    int elements[n];

    for (int i = 0; i < n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &elements[i]);
    }

    for (int i=0; i < n ; i++){
        total += elements[i];
    }
    mean = total/n;
    printf("%d",mean);

    return 0;


}