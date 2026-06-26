#include <stdio.h>

int main() {

	double n = 3.14159;
	double raio;
	scanf("%lf", &raio);

	// double area = n * (raio * raio);
	double area = (n * raio) * raio;
	printf("A=%.4lf", area);

	return 0;
}
