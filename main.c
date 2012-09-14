#include <stdio.h>
#include <math.h>

/* (0,x metszes) (y metszes,0) */
int main() {

	double a, b;
	printf("Írd be az a-t és a b-t!\n");
	scanf("%lf,%lf", &a, &b);

	if (a == 0) {
		printf("Nem metszi az x tengelyt! (%.2f,0)", b);
	} else {
		printf("(0;%.2f) (%.2f,0)", -b / a, b);
	}

	return 0;
}
