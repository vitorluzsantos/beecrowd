#include <cmath>
#include <stdio.h>

int main(){
	double x1, y1;
	double x2, y2;
	double resultado, x, y;

	scanf("%lf", &x1);
	scanf("%lf", &y1);
	scanf("%lf", &x2);
	scanf("%lf", &y2);

	x = x2 - x1;
	y = y2 - y1;

	resultado = sqrt((x * x) + (y * y));

	printf("%.4lf\n", resultado);

	return 0;
}
