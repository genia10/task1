#include <stdio.h>

#include "myfunc.h"

int main()
{
    int a, b, c;
    printf("Hello World!\n");
    printf("Введите a, b и c:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    double* p = disc(a,b,c);
    printf("%lf\n",p[0]);

    printf("%lf\n",p[1]);
    return myfunc(2);
}
