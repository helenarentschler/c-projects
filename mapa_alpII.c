#include <stdio.h>
#include <stdlib.h>

struct Projetos{
	int codigo, ano, status;
	char titulo[30], chave[40], desc[60], autores[60], inst[30], gerenteN[20], gerenteS[20];
};

void cadastrar(struct Projetos projeto[], size_t len){
	int i = 1, j, code, proc;
	char op = 's';
	printf ("\nCadastro de projetos\n");
	printf ("\nInforme as seguintes informacoes do projeto: \n");
	while (i <= 200 && op == 's') {
		j = 1;
		proc = 0;
		printf("\nCodigo: ");
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

void pesquisarProjeto(struct Projetos projeto[], size_t len){
	int i = 1, j, proc;
	char code, op = 's';
	printf("\nPesquisa por projeto cadastrado\n");
	do {
		j = 1;
		proc = 0;
		printf("\nInsira o codigo do projeto: ");
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
			printf("\nCodigo: %d\n", projeto[i].codigo);
			printf("Titulo: %s\n", projeto[i].titulo);
			printf("Palavras-chave: %s\n", projeto[i].chave);
			printf("Descricao: %s\n", projeto[i].desc);
			printf("Autores: %s\n", projeto[i].autores);
			printf("Instituicao: %s\n", projeto[i].inst);
			printf("Ano: %d\n", &projeto[i].ano);
			printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
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
		printf("\nDeseja pesquisar mais um projeto? 's'- sim 'n'- nao ");
		scanf(" %c", &op);	
	}while (op == 's' && i <= 200);
} 

void listarTodos(struct Projetos projeto[], size_t len){
	int i = 1;
	printf("\nListagem de Projetos\n");
	do {
		printf("\nCodigo: %d\n", projeto[i].codigo);
		printf("Titulo: %s\n", projeto[i].titulo);
		printf("Palavras-chave: %s\n", projeto[i].chave);
		printf("Descricao: %s\n", projeto[i].desc);
		printf("Autores: %s\n", projeto[i].autores);
		printf("Instituicao: %s\n", projeto[i].inst);
		printf("Ano: %d\n", &projeto[i].ano);
		printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
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
		
void listarAfazer(struct Projetos projeto[], size_t len){
	int i = 1;
	printf("\nListagem de Projetos a fazer\n");
	do {
		if (projeto[i].status == 1){
			printf("\nCodigo: %d\n", projeto[i].codigo);
			printf("Titulo: %s\n", projeto[i].titulo);
			printf("Palavras-chave: %s\n", projeto[i].chave);
			printf("Descricao: %s\n", projeto[i].desc);
			printf("Autores: %s\n", projeto[i].autores);
			printf("Instituicao: %s\n", projeto[i].inst);
			printf("Ano: %d\n", &projeto[i].ano);
			printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
			printf("Status: a fazer\n");
		}
		i++;
	}while (i <= 200);
} 

void listarEmcurso(struct Projetos projeto[], size_t len){
	int i = 1;
	printf("\nListagem de Projetos em curso\n");
	do {
		if (projeto[i].status == 2){
			printf("\nCodigo: %d\n", projeto[i].codigo);
			printf("Titulo: %s\n", projeto[i].titulo);
			printf("Palavras-chave: %s\n", projeto[i].chave);
			printf("Descricao: %s\n", projeto[i].desc);
			printf("Autores: %s\n", projeto[i].autores);
			printf("Instituicao: %s\n", projeto[i].inst);
			printf("Ano: %d\n", &projeto[i].ano);
			printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
			printf("Status: em curso\n");
		}
		i++;
	}while (i <= 200);
} 

void listarFinalizado(struct Projetos projeto[], size_t len){
	int i = 1;
	printf("\nListagem de Projetos finalizados\n");
	do {
		if (projeto[i].status == 3){
			printf("\nCodigo: %d\n", projeto[i].codigo);
			printf("Titulo: %s\n", projeto[i].titulo);
			printf("Palavras-chave: %s\n", projeto[i].chave);
			printf("Descricao: %s\n", projeto[i].desc);
			printf("Autores: %s\n", projeto[i].autores);
			printf("Instituicao: %s\n", projeto[i].inst);
			printf("Ano: %d\n", &projeto[i].ano);
			printf("Gerente Responsavel: %s%s\n", projeto[i].gerenteN, projeto[i].gerenteS);
			printf("Status: finalizado\n");
		}
		i++;
	}while (i <= 200);
}

void main(){
	struct Projetos proj[200];
	int i, option1 = 0;
	char option2 = 's'; 
	printf("Projetos\n");
	while (option1 != 7 && option2 == 's'){
		printf("\nDigite 1 se deseja cadastrar um Projeto\n");
		printf("Digite 2 se deseja pesquisar um Projeto via codigo\n");
		printf("Se deseja abrir uma listagem de projetos, digite:\n");
		printf(" 3 - para todos projetos\n");
		printf(" 4 - para projetos a fazer\n");
		printf(" 5 - para projetos em curso \n");
		printf(" 6 - para projetos finalizados\n");
        printf("Digite 7 para sair\n");
		scanf("%d", &option1);
		if (option1 != 7){
			switch (option1){
				case 1 :
					cadastrar(proj, sizeof(proj));
					break;
				case 2 :
					pesquisarProjeto(proj, sizeof(proj));
					break;
				case 3 :
					listarTodos(proj, sizeof(proj));
					break;
				case 4 :
					listarAfazer(proj, sizeof(proj));
				case 5 :
					listarEmcurso(proj, sizeof(proj));
					break;
				case 6 :
					listarFinalizado(proj, sizeof(proj));
					break;
				default :
					printf("Invalido!");
			}
		} 
		printf("\nDeseja escolher outra opcao? 's'- sim 'n'- nao \n");
		scanf(" %c", &option2);
	}
}



