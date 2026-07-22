#include <stdio.h>

int main(){
	double valor;

	scanf("%lf", &valor);

	int n100 = valor / 100;
	valor = valor - (100 * n100);

	int n50 = valor / 50;
	valor = valor - (50 * n50);

	int n20 = valor / 20;
	valor = valor - (20 * n20);

	int n10 = valor / 10;
	valor = valor - (10 * n10);

	int n5 = valor / 5;
	valor = valor - (5 * n5);

	int n2 = valor / 2;
	valor = valor - (2 * n2);

	int m1 = valor / 1;
	valor = valor - (1 * m1);

	int m05 = valor / 0.5;
	valor = valor - (0.5 * m05);

	int m025 = valor / 0.25;
	valor = valor - (0.25 * m025);

	int m01 = valor / 0.1;
	valor = valor - (0.1 * m01);

	int m005 = valor / 0.05;
	valor = valor - (0.05 * m005);

	int m001 = valor / 0.01;
	valor = valor - (0.01 * m001);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m1);
	printf("%d moeda(s) de R$ 0.50\n", m05);
	printf("%d moeda(s) de R$ 0.25\n", m025);
	printf("%d moeda(s) de R$ 0.10\n", m01);
	printf("%d moeda(s) de R$ 0.05\n", m005);
	printf("%d moeda(s) de R$ 0.01\n", m001);

	return 0;
}
