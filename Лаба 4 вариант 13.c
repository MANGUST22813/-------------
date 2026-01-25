#include <stdio.h>

int main() {
    int a, b, c;
    int mid;
    
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        mid = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        mid = b;
    } else {
        mid = c;
    }
    
    printf("Среднее число: %d\n", mid);
    
    return 0;
}