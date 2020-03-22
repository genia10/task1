#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    int a, b, c, f;
    printf("Hello World!\n");
    printf("Введите a, b и c:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a == 0) {
	fprintf(stderr, "Данное уравнение не является квадратным! Завершение программы.\n");
	exit(EXIT_FAILURE);
	}
    double m[2];
    double *k=m;
    f = disc(a,b,c,k);
    if (f == 2) {
	fprintf(stderr, "Дискриминант отрицательный! Завершение программы.\n");
	exit(EXIT_FAILURE);
	}
    if (f == 1) 
	printf("Уравнение имеет 1 корень:%.3lf\n",k[0]);
    else 
    printf("Уравнение имеет 2 корня:%.3lf, %.3lf\n",k[0], k[1]);
    
    
    return myfunc(2);
}
