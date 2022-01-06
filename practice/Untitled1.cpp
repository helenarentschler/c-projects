int main(){
	int option1 = 0, option2 = 's'; 
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
    return 8;
}
