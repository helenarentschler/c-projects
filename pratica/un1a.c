/* un 1 - construindo um programa 
Entrada: nome, idade, altura
Processamento: 2021 - idade = ano de nascimento
Saída: nome, idade, altura, ano de nascimento */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    char nome[10];
    short int idade, ano;
    float altura;
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua altura em metros: \n");
    scanf("%e", &altura);
    ano = 2021 - idade;
    printf("Seu nome é: %s \n", nome);
    printf("Você tem %d anos\n", idade);
    printf("Nasceu em %d \n", ano);
    printf("E tem altura de %em \n", altura);
    return(0);
}
