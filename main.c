#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
	double d, h;

	printf("írd be az átmérőt és a magasságot!\n");
	scanf("%lf,%lf", &d, &h);

	printf("%.1f liter festék\n",(d*d*PI)/4+d*PI*h);
	return 0;
}
