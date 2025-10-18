#include <stdio.h>
int main(){
    double R1, R2;
    const double PI = 3.14;
    printf("Больший радиус: ");
    scanf("%lf", &R1);
    printf("Меньший радиус: ");
    scanf("%lf", &R2);
    if (R1 <= R2){
        printf("Ошибка");
        return 1;
    }
    double S1 = PI * R1 * R1;
    double S2 = PI * R2 * R2;
    double S3 = S1 - S2;
    printf("Площадь правого круга: %.2lf\n", S1);
    printf("Площадь левого круга: %.2lf\n", S2);
    printf("Площадь кольца S3: %.2lf\n", S3);
    return 0;
}