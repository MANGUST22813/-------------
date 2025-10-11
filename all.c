#include <stdio.h>

int main() {
	double a, b;
	printf("Введите 2 ненулевых числа: ");
	scanf("%lf %lf", &a, &b);
	if (a==0 || b ==0){
	    return 1;
	}
	a_s = 0;
	b_s = 0;
	sum = 0;
	difference = 0;
	product = 0;
	quo = 0;
	a_s = a * a;
	b_s = b * b;
	sum = a_s + b_s;
    difference = a_s - b_s;
	product = a_s * b_s;
	quo = a_s / b_s;
	printf(sum);
	printf(difference);
	printf(product);
    printf(quo);
    return 0;

}

