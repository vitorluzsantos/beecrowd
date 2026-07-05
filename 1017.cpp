#include <stdio.h>

int main(){
	int tempo, velocidade;

	scanf("%d", &tempo);
	scanf("%d", &velocidade);

	double distancia = tempo * velocidade;
	double resultado = distancia / 12;

	printf("%.3lf\n", resultado);

	return 0;
}
