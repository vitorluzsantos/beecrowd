#include <stdio.h>

int main(){
	int codigo1, codigo2, n1, n2;
	double valor1, valor2;

	scanf("%d", &codigo1);
	scanf("%d", &n1);
	scanf("%lf", &valor1);
	scanf("%d", &codigo2);
	scanf("%d", &n2);
	scanf("%lf", &valor2);

	double total1 = valor1 * n1;
	double total2 = valor2 * n2;

	double total = total1 + total2;

	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}
