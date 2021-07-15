#include <stdio.h>
#include <stdlib.h>

struct Projetos {
	int codigo, ano, status;
	char titulo[30], chave[40], desc[60], autores[60], inst[30], gerenteN[20], gerenteS[20] ;
};

void cadastrar(){
	int i = 1, j, code, proc;
	char op = 's';
	printf ("Cadastro de projetos\n");
	printf ("Informe as seguintes informacoes do projeto: \n");
	while (i <= 200 && op == 's') {
		j = 1;
		proc = 0;
		printf("Codigo: ");
		scanf("%d", &code); 
		while (j <= 200 && proc == 0){
			if (code == projeto[j].codigo){
				proc = 1;
			}
			else {
				j++;
			}
		}
		if (proc == 1){
			printf("Codigo ja cadastrado!\n");
		}else{
			projeto[i].codigo = code;
			printf("Titulo: ");
			fgets(projeto[i].titulo, 30, stdin); 
			printf("Palavras-chave(4): ");
			fgets(projeto[i].chave, 30, stdin); 
			printf("Descricao: ");
			fgets(projeto[i].desc, 60, stdin);
			printf("Autores: ");
			fgets(projeto[i].autores, 60, stdin);
			printf("Instituicao: ");
			fgets(projeto[i].inst, 20, stdin); 
			printf("Ano: ");
			scanf("%d", &projeto[i].ano);
			printf("Gerente Responsavel: ");
			scanf("%s%s", projeto[i].gerenteN, projeto[i].gerenteS);	
			printf("Status: (1 - a fazer, 2 - fazendo, 3 - concluido) ");
			scanf("%d", &projeto[i].status);
			i++;
		}
		printf("Deseja cadastrar mais um projeto? 's'- sim 'n'- nao ");
		scanf(" %c", &op);	
	}
}

void imprimirInfos(){
	int i;
	printf("\nCodigo: %d\n", projeto[i].codigo);
	printf("Titulo: %s\n", projeto[i].titulo);
	printf("Palavras-chave: %s\n", projeto[i].chave);
	printf("Descricao: %s\n", projeto[i].desc);
	printf("Autores: %s\n", projeto[i].autores);
	printf("Instituicao: %s\n", projeto[i].inst);
	printf("Ano: %d\n", &projeto[i].ano);
	printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
}

void pesquisarProjeto(){
	int i = 1, j, proc;
	char code = 0, op = 's';
	printf("Pesquisa por projeto cadastrado\n");
	do {
		j = 1;
		proc = 0;
		printf("Insira o codigo do projeto: ");
		scanf("%d", &code);
		while (j <= 200 && proc == 0){
			if (code == projeto[j].codigo){
				proc = 1;
			} else {
				j++;
			}
		}	
		if (proc == 0){
			printf("Projeto nao cadastrado!\n");
		} else {
			imprimirInfos();
			switch (projeto[i].status){
			case 1 :
				printf("Status: a fazer\n");
				break;
			case 2 : 
				printf("Status: fazendo\n");
				break;
			case 3:
				printf("Status: concluido\n");
				break;
			}
			i++;
		}
		printf("Deseja pesquisar mais um projeto? 's'- sim 'n'- nao ");
		scanf(" %c", &op);	
	}while (op == 's' && i <= 200);
} 

void listarTodos(){
	int i = 1;
	char op = 's';
	printf("Listagem de Projetos\n");
	do {
		imprimirInfos();
		switch (projeto[i].status){
			case 1 :
				printf("Status: a fazer\n");
				break;
			case 2 : 
				printf("Status: fazendo\n");
				break;
			case 3:
				printf("Status: concluido\n");
				break;
			}
		i++;
	}while (i <= 200);
} 
		
void listarAfazer(){
	int i = 1;
	char op = 's';
	printf("Listagem de Projetos a fazer\n");
	do {
		if (projeto[i].status == 1){
			imprimirInfos();
			printf("Status: a fazer\n");
		}
		i++;
	}while (i <= 200);
} 

void listarEmcurso(){
	int i = 1;
	char op = 's';
	printf("Listagem de Projetos a fazer\n");
	do {
		if (projeto[i].status == 2){
			imprimirInfos();
			printf("Status: em curso\n");
		}
		i++;
	}while (i <= 200);
} 

void listarFinalizado(){
	int i = 1;
	char op = 's';
	printf("Listagem de Projetos a fazer\n");
	do {
		if (projeto[i].status == 3){
			imprimirInfos();
			printf("Status: finalizado\n");
		}
		i++;
	}while (i <= 200);


int main(){
	struct Projetos projeto[200];
	int option1 = 0, option2 = 's';
	printf("Projetos\n");
	while (option1 != 8 && option2 == 's'){
		printf("\nDigite 1 se deseja cadastrar um Projeto\n");
		printf("Digite 2 se deseja pesquisar um Projeto via codigo\n");
		printf("Se deseja abrir uma listagem de projetos, digite:\n");
		printf(" 3 - para todos projetos\n");
		printf(" 4 - para projetos a fazer\n");
		printf(" 5 - para projetos em curso \n");
		printf(" 6 - para projetos finalizados\n");
        printf("Digite 8 para sair\n");
		scanf("%d", &option1);
		if (option1 != 8){
			switch (option1){
				case 1 :
					cadastrar();
					break;
				case 2 :
					pesquisarProjeto();
					break;
				case 3 :
					listarTodos();
					break;
				case 4 :
					listarAfazer();
					break;
				case 5 :
					listarEmcurso();
					break;
				case 6 :
					listarFinalizado();
					break;
				default :
					printf("Invalido!");
			}
		}
		printf("\nDeseja escolher outra opcao? 's'- sim 'n'- nao ");
		scanf(" %c", &option2);	
	}
	return 0;
}

