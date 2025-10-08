#include <stdio.h>

int main(){
    int num;
    int bit;

    printf("Enter a number: ");
    scanf("%d" , &num);

    printf("Enter the bit you want to check: ");

    scanf("%d" , &bit);
    
    printf("Checking if %d bit is set.\n" , bit);

    (num >> bit - 1) & 1 ? printf("On") : printf("Off");


    return 0;
}