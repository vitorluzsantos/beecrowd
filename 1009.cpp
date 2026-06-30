#include <stdio.h>

int main(){
	char NOME[100];
	double SALARIOFX, MONTANTE;

	scanf("%s", &NOME);
	scanf("%lf", &SALARIOFX);
	scanf("%lf", &MONTANTE);

	double TOTAL = SALARIOFX + (MONTANTE * 0.15);
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	return 0;
}
