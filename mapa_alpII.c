#include <stdio.h>
#include <stdlib.h>

struct Projetos {
	int codigo, ano, status;
	char titulo[30], chave[40], desc[60], inst[30], gerenteN[20], gerenteS[20] ;
};

void cadastrar(){
	int i = 1, j = 1;
	char op = 's';
	while (i <= 200 && op == 's') {
		printf("Codigo: ");
		scanf("%d", projeto[i].codigo); 
		printf("Titulo: ");
		fgets(projeto[i].titulo, 30, stdin); 
		printf("Palavras-chave(4): ");
		fgets(projeto[i].chave, 30, stdin); 
		printf("Descricao: ");
		fgets(projeto[i].desc, 60, stdin);
		printf("Instituicao: ");
		fgets(projeto[i].inst, 20, stdin); 
		printf("Ano: ");
		scanf("%d", projeto[i].ano);
		printf("Status: (1 - a fazer, 2 - fazendo, 3 - concluido) ");
		scanf("%d", projeto[i].status);
		printf("Gerente Responsavel: ");
		scanf("%s%s", projeto[i].gerenteN, projeto[i].gerenteS);
		printf("Deseja cadastrar mais um projeto? 's'- sim 'n'- nao");
		scanf(" %c", &op);
		i++;
	}
}

int main(){
	struct Projetos projeto[200];
	cadastrar();
	return 0;
}
