#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d" , &num);

    num = num << 1; //multiple by 2

    printf("Ans = %d" , num);
    
    return 0;
}