#include <stdio.h>
#include <math.h>
double* disc(int a, int b, int c)
{
    double d;
    double m[2];
    double *p=m;
    d=b*b-4*a*c;
    printf("%lf\n", d);
    printf("%lf\n", (-b+sqrt(d))/(2*a));
    printf("%lf\n", (-b-sqrt(d))/(2*a));
    if(d>=0){
        m[0]= (-b+sqrt(d))/(2*a);
        m[1]= (-b-sqrt(d))/(2*a);
    }
    else {
        printf("Дискриминант отрицательный. Корней нет.");
    }
return p;
}
