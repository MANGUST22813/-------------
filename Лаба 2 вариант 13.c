#include <stdio.h>

int main() {
    int number, reversed;
    
    printf("Введите трехзначное число: ");
    scanf("%d", &number);
    
    int sotni = number / 100;       
    int desyatki = (number / 10) % 10;  
    int edenici = number % 10;            
    
    reversed = edenici * 100 +  desyatki* 10 + sotni;
    
    printf("Число справа налево: %d\n", reversed);
    
    return 0;
}