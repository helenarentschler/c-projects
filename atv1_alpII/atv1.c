#include <stdio.h>
#include <stdlib.h>
int main(){
	float sliq, sreaj;
	char op;
	printf("Helena Rentschler - RA: 21141259-5 \n\n");
	printf("RenTech - Reajuste de Salario \n\n");
	op = 's';
	while (op == 's'){
		printf("Insira seu salario liquido: ");
		scanf("%f", &sliq);
		if (sliq > 1750.00){
			sreaj = sliq * 1.075;
		}
		else{
			sreaj = sliq * 1.075 + 150.00;
		}
		printf("\nSalario liquido informado: R$ %.2f \n", sliq); 
		printf("Salario reajustado: R$ %.2f \n", sreaj);
		printf("Digite 's' para calcular novamente e 'n' para sair: ");
		scanf("%s", &op);
		system("cls");
	}
	return(0);
}
