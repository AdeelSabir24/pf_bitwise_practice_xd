#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d" , &num);

    printf("Ans = %d" , num >> 1); //divide by 2
    
    return 0;
}