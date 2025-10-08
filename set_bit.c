#include <stdio.h>

int main(){
    int num;
    int bit;

    printf("Enter a number: ");
    scanf("%d" , &num);

    printf("Enter the bit you want to set: ");

    scanf("%d" , &bit);
    
    printf("Setting %d of %d to 1 \n" , num ,  bit);

    num = num | (1 << bit - 1 );

    printf("%d" , num);


    return 0;
}