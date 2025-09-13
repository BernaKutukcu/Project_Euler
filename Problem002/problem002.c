// C program to sum all even Fibonacci numbers not exceeding 4,000,000.

#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int nextNumber;
    int sum = 0;

    while(b <= 4000000){

        if(b % 2 == 0){
            printf("%d ", b);
            sum += b;
        }

        nextNumber = a + b;
        a = b;
        b = nextNumber;

    }

    printf("\n\nSum: %d", sum);

    return 0;
}