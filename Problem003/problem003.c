// C program to print the largest prime factor of the number 600851475143.
#include <stdio.h>

void printPrimeNum(long long int number);
long long int printPrimeNumMax(long long int number);

int main(){
    
    printf("600851475143'un asal carpani: ");
    printPrimeNum(600851475143);

    printf("\nEn buyuk asal carpani: %lld", printPrimeNumMax(600851475143));

    return 0;
}

void printPrimeNum(long long int number){

    if(number % 2 == 0){
        printf("2 ");
        while(number %2 == 0){
            number /= 2;
        }
    }

    for(int i = 3; i * i <= number; i+=2){
        if(number % i == 0){
            printf("%d ", i);
            while(number % i == 0){
                number /= i;
            }
        }
    }

    if(number > 1){
        printf("%lld", number);
    }
}

long long int printPrimeNumMax(long long int number){
    int largest_prime = 2;

    while(number % 2 == 0){
        number /= 2;
        largest_prime = 2;
    }

    for(int i = 3; i * i <= number; i+=2){
        while(number % i == 0){
            number /= i;
            largest_prime = i;
        }
    }
    if(number > 1){
        largest_prime = number;
    }

    return largest_prime;
}
