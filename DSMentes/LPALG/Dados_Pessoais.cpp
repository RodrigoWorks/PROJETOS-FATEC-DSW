// Framework C++

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{								// INÍCIO DO PROGRAMA
		
// Declaração de variáveis 

	char nome[12], sobrenome[15], estado[20];
	unsigned int idade;


// Declaração de Instruções e Comandos da linguagem C++
	
	setlocale(LC_ALL,"Portuguese");
	
	system("cls");				// Limpeza inicial de Tela
	
	printf("\n    << Dados Pessoais >> \n");		// Em síntese: Objetivo do programa
	
// Lógica da programação do Algoritmo	
	
	printf("\n Informe o seu Nome: ");
	scanf("%s",&nome);

//	gets(nome);
		
	printf("\n Informe o seu SobreNome: ");
	scanf("%s",&sobrenome);
	
	printf("\n Informe sua Idade: ");
	scanf("%i",&idade);
	
	printf("\n Informe onde você nasceu (Cidade/Estado): ");
	scanf("%s",&estado);
	
	system("cls");
	printf("\n    << Dados Pessoais >> \n");
	
	printf("\n Nome e Sobrenome: %c %c",nome,sobrenome);
	printf("\n Idade: %i anos",idade);
	printf("\n Local de Nascimento: %s",estado);
		
	printf("\n\n");
	system("pause");			// Parar a execução do programa
	
	return 0;					// Fim dos comandos
	
}								// FIM DO PROGRAMA