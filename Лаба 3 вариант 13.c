#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Введите три целых числа через пробел: ");
    scanf("%d %d %d", &A, &B, &C);
    
    if (A > 0 || B > 0 || C > 0) {
        printf("Истина\n");
    } else {
        printf("Лож\n");
    }
    
    return 0;
}