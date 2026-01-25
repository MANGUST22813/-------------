#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double v, a, c, h, S;
    const double sqrt2 = sqrt(2.0);
    
    printf("Введите номер элемента (1-4): ");
    scanf("%d", &n);
    printf("Введите значение: ");
    scanf("%lf", &v);
    
    if (v <= 0 || n < 1 || n > 4) {
        printf("Ошибка\n");
        return 1;
    }
    
    switch (n) {
        case 1: a = v; break;
        case 2: c = v; a = c / sqrt2; break;
        case 3: h = v; c = 2 * h; a = c / sqrt2; break;
        case 4: S = v; c = sqrt(4 * S); a = c / sqrt2; break;
    }
    
    if (n != 1) a = a; 
    if (n != 2) c = a * sqrt2;
    if (n != 3) h = c / 2;
    if (n != 4) S = c * h / 2;
    
    printf("Катет a = %.4f\n", a);
    printf("Гипотенуза c = %.4f\n", c);
    printf("Высота h = %.4f\n", h);
    printf("Площадь S = %.4f\n", S);
    
    return 0;
}