//C program to find the largest palindromic number from the product of two 3-digit numbers.

#include <stdio.h>

int palindromic_number(int number);

int main(){
    int number, i, j;
    int max_palindromic_number = 0;
    int a = 0, b = 0;

    for(i = 999; i >= 100; i--){
        for(j = 999; j >= 100; j--){
            number = i * j;

            if(number <= max_palindromic_number){
                break;
            }
            if(palindromic_number(number)){
                max_palindromic_number = number;
                a = i;
                b = j;
            }
        }
    }
    printf("En buyuk palindromik sayi: %d = %d * %d", max_palindromic_number, a, b);

    return 0;
}

int palindromic_number(int number){
    int num_original, end_digit, reverse = 0;
    int ret_val = 0;

    num_original = number;

    while(number > 0){
        end_digit = number % 10;
        reverse = reverse * 10 + end_digit;
        number = number / 10;
    }

    if(reverse == num_original){
        ret_val = 1;
    }
    return ret_val;
}