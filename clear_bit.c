#include <stdio.h>

int main(){
    int num;
    int bit;

    printf("Enter a number: ");
    scanf("%d" , &num);

    printf("Enter the bit you want to clear: ");
    scanf("%d" , &bit);

    printf("Clearing bit %d of %d\n" , bit , num);

    num = num & ~(1 << bit - 1);

    printf("%d" , num);

    return 0;
}