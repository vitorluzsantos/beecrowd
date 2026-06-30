#include <stdio.h>

int main(){
	int NUMBER, HOUR;
	double VALUE;

	scanf("%d", &NUMBER);
	scanf("%d", &HOUR);

	scanf("%lf", &VALUE);

	double SALARY = VALUE * HOUR;

	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2lf\n", SALARY);

	return 0;
}
