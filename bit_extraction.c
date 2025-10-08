#include <stdio.h>

void bitcount(unsigned int n){

    if(n > 1){

        bitcount(n >> 1);

    }
    
    printf("%u" , n & 1);

}

int main(){

    unsigned int num;

    int bit;

    printf("Enter a number: ");
    scanf("%u" , &num);

    bitcount(num);

    printf("\nEnter the bit you want to extract: ");
    scanf("%d" , &bit);

    num = 1 & (num >> bit - 1 );
    
    printf("%d\n" , num);


    return 0;

}