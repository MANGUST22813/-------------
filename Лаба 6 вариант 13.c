#include <stdio.h>

int main() {
   
    double a;      
    int s;       
    int i;      
    
    printf("Введите число");
    scanf("%lf", &a);
    
    printf("Введите степень ");
    scanf("%d", &s);
    
    if (s <= 0) {
        printf("Ошибка.\n");
        return 0; 
    }
    
    double b = a;
    i = 1;
    
    while (i <= s) {
        printf("%.2f\n", b);
        b = b * a;
        i = i + 1;
    }
    
    return 0;
}