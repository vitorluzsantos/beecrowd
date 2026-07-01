#include <stdio.h>

int maior(int n1, int n2);

int main(){
	int a, b, c;
	int resultado;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	resultado = maior(maior(a, b), c);
		
	printf("%d eh o maior\n", resultado);

	return 0;
}

int maior(int n1, int n2){
	if(n1 > n2){
		return n1;
	}
	else{
		return n2;
	}
}
