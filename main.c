#include <stdio.h>
#include <math.h>

int main() {
	double x1, x2, y1, y2;

	printf("Ird be az elso pontot\n");
	scanf("%lf,%lf", &x1, &y1);

	printf("Ird be a masodik pontot\n");
	scanf("%lf,%lf", &x2, &y2);

	printf("d=%f\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));

	return 0;
}
