// C program to find the sum of all multiples of 3 or 5 below 1000

#include <stdio.h>

int main(){

    int num;
    int sum = 0;

    for(num = 0; num < 1000; num++){
        if(num % 3 == 0 || num % 5 == 0){
            sum += num;
        }
    }

    printf("Sum: %d", sum);

    return 0;
}
