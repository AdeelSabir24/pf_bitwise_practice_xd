#include <stdio.h>

int main(){
    int power;

    printf("Enter a number: ");
    scanf("%d" , &power);

    ((power & (power - 1)) == 0) ? printf("Power of 2") : printf("Not power of 2");

    return 0;
}