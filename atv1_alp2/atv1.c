#include <stdio.h>
#include <stdlib.h>
int main (){
	float s;
	printf("Helena Rentschler - RA: 21141259-5 \n");
	printf("RenTech - Reajuste de Salario \n");
	printf("Insira seu salario liquido: ");
	scanf ("%f", &s);
	if (s > 1750.00){
		s = s*1.075;
		printf("Salario reajustado: %.2f", s);
	}
	else {
		s = s*1.075 + 150.00;
		printf("Salario reajustado: %.2f", s);
	}
	return(0);
}
