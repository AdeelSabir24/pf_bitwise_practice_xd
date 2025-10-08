#include <stdio.h>

int main(){
    int a , b;

    printf("Enter two numbers: ");
    scanf("%d %d" , &a , &b );

    int ans = (a | b) & (~a | ~b);

    printf("XOR = %d" , ans);

    return 0;
}