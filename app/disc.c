#include <stdio.h>

#include <math.h>

int disc(double a, double b, double c, double* k)
{
    double d;
    d=b*b-4*a*c;
    if(d>0){
        k[0] = (-b+sqrt(d))/(2*a);
        k[1] = (-b-sqrt(d))/(2*a);
    }
    else { 
	if(d==0){
            k[0] = -b/(2*a);
	    if (k[0]==-0)
		k[0]=0;// когда b == 0 в k[0] получается -0
	    return 1;
	    }
	else
	    return 2;
    }

return 0;
}
