#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d" , &num);

    for (int i = 7 ; i >= 0 ; i-- )
    {
        printf ("%d" , (num >> i) & 1);

        if (i % 4 == 0)
        {
            printf(" ");
        }
    }
    
    return 0;
}