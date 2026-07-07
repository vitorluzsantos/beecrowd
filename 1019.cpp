#include <stdio.h>

int main(){
	int horas, minutos, segundos;

	scanf("%d", &segundos);

	horas = segundos / 3600;
	segundos = segundos - (3600 * horas);
	minutos = segundos / 60;
	segundos = segundos - (60 * minutos);

	printf("%d:%d:%d\n", horas, minutos, segundos);
	return 0;
}
