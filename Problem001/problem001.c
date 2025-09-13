// C program to find the sum of all multiples of 3 or 5 below 1000

#include <stdio.h>

int main(){

    int num = 0;
    int sum = 0;

    num = 0;
    while(num < 1000){
        if(num % 3 == 0 || num % 5 == 0){
            sum += num;
        }
        num ++;
    }
 
    printf("Sum: %d\n", sum);

    return 0;
}
