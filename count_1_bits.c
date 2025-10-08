#include <stdio.h>

int main(){
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d" , &num);

    while(num){
        num &= (num - 1);  //counts how many bits are 1
        count++;
    }

    printf("%d" , count);
    return 0;
}