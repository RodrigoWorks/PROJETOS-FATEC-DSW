#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

/*	
	Aula 08_1 - Exercício 6 - Framework
	
				Uso da estrutura de repetição para validação de dados

				Alterar o programa Aula_08_1_exercicio_5,cpp para:
				
				Caso o Sexo seja informado errado por 4 vezes, interromper
				a estrutura de repetição, continuando a execução do programa 
				logo após essa estrutura..		    

*/	            



int main()

{

	setlocale(LC_ALL,"Portuguese");
// Declaração de variáveis

    char sexo_func;
    unsigned int idade_func;
    
	unsigned int tentativas = 0;
	
	puts("\n<< Aula 08_1 - Exercicio 6 - Validação de dados >>");

// Entrada de Dados
	 
	printf("\n\n Informe o Sexo do Funcionário [ M ou F ]: ");
	fflush(stdin);
	scanf("%c",&sexo_func);
	sexo_func = toupper(sexo_func);
	
// Validação do Sexo

	while ((sexo_func != 'F') && (sexo_func != 'M'))
		{
			printf("\n\n Erro: Sexo deve ser igual a M ou F! \n\n");
			system("pause");
			
			++tentativas;			// Controla quantidade de repetições
			
			if (tentativas < 4)
				{ 
					system("cls");
					puts("\n<< Aula 08_1 - Exercicio 6 - Validação de dados >>");
					
					printf("\n\n Informe o Sexo do Funcionário [ M ou F ]: ");
					fflush(stdin);
					scanf("%c",&sexo_func);		
					sexo_func = toupper(sexo_func);
				}
			else	
				{	
					system("cls");
					puts("\n<< Aula 08_1 - Exercicio 6 - Validação de dados >>");					
					printf("\n\n Você digitou errado 4 vezes!");								
					printf("\n\n Você não enxerga direito ou não pensa! TCHAU!");								
					printf("\n\n A Validação do Sexo será INTERROMPIDA!! \n\n");
					system("pause");
					
					break;					// INTERROMPE A REPETIÇÃO
				}		
		}	
	
	do	
		{
			system("cls");
			puts("\n<< Aula 08_1 - Exercicio 6 - Validação de dados >>");
			
			printf("\n\n Informe a Idade do Funcionário..........: ");         
			fflush(stdin);
			scanf("%d",&idade_func);
		
			if (idade_func < 14 || idade_func > 60)
			    {
			    	printf("\n\n Idade do funcionário deve estar entre 14 e 60 anos, inclusive.\n\n");
			    	system("pause");
				}
				
		}
	while (idade_func < 14 || idade_func > 60);
	
	return 0;
}
