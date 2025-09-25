/*
  C program to find the difference between the sum of the squares
    of the first 100 natural numbers and the square of their sum.
*/

#include <stdio.h>

int main(){
    int i = 1;
    int sum1 = 0, sum2 = 0, sum;

    for(i = 1; i <= 100; i++){
        sum1 += i*i;
        sum2 += i;
    }

    sum = sum2 * sum2;

    printf("%d - %d = %d", sum, sum1, (sum - sum1));

    return 0;
}

