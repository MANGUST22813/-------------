#include <stdio.h>

int main() {
    double A, s = 0;
    int K = 0;
    
    printf("A (>1): ");
    scanf("%lf", &A);
    
    while (s <= A) {
        K++;
        s += 1.0 / K;
    }
    
    printf("K = %d\n", K);
    printf("Сумма = %.6f\n", s);
    
    return 0;
}