#include <stdio.h>
#include <math.h>

int main() {
	double a,b,t,k,e;

	printf("Add meg a 2 oldalt.\n");
	scanf("%lf,%lf", &a, &b);

	t=a*b;
	k=2*(a+b);
	e=sqrt((a+b)*(a+b));

	printf("T = %.3f, K = %.3f, e = %.3f \n ",t,k,e);


	return 0;
}
