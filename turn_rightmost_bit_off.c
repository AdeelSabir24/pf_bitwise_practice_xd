#include <stdio.h>

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d" , &num);

    num = num & ( num - 1 );

    printf("After turing off right-most bit ans = %d" , num);

    return 0;
}