#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/* 
	Aula 06 - Exercício 2	
				
				Modificar o programa Aula_06_1_exercico_Calc_Reaj_Sal_1.cpp para aplicar o Reajuste 
				salarial considerando o Tempo de Empresa (em anos).
				
				Funcionários do sexo Feminino com mais de 5 anos de empresa terão 8.5% de reajuste.

				Funcionários do sexo Masculino com 3 ou mais anos de empresa terão 9.5% de reajuste.

				Mostre os dados de saída, considerando essas alterações.
				
				Atenção! Use operadores lógicos para resolver este exercício.
				
				Salvar o programa alterado como: Aula_06_2_exercico_Calc_Reaj_Sal.cpp
*/

int main()

{
	
	setlocale(LC_ALL,"portuguese");		// Requer declaração da biblioteca - <locale.h>
	
// Definição de variáveis e constantes

	float Salario_Atual, 
		  Val_Reajuste  = 0, 
		  Porc_Reajuste, 
		  Salario_Reaj  = 0;
		  
	char sexo;
	
	unsigned int tempo_empresa, num_matricula;
	
	system("cls");
	printf("\n\n <<  Calculo do Reajuste Salarial  >>\n");
	
// Entrada de dados	

	printf("\n Informe o número da matrícula [ 0 = FIM ]:");
	fflush(stdin);
	scanf("%u", &num_matricula);
	
	while (num_matricula != 0){
			printf("\n Informe o Sexo [ M ou F ]..........: ");
	fflush(stdin);
	scanf("%c",&sexo);
	sexo = toupper(sexo);
	
	if (sexo == 'F' || sexo == 'M')
		{
			printf("\n Informe o Tempo de Empresa (em Anos): ");
			fflush(stdin);
			scanf("%d",&tempo_empresa);
	
			printf("\n Informe o Salário Atual.............: ");
			fflush(stdin);
			scanf("%f",&Salario_Atual);
		}

// Processamento de cálculos

	if (sexo =='F' && tempo_empresa > 5)
		 {
			Porc_Reajuste = 8.5;
			Val_Reajuste = Salario_Atual * (Porc_Reajuste / 100);	
		 }		
	else
		if (sexo =='M' && tempo_empresa >= 3)
		   {
				Porc_Reajuste = 9.5;
				Val_Reajuste = Salario_Atual * (Porc_Reajuste / 100);	
		   }	
		else
		    if (sexo != 'F' && sexo != 'M')
		  	    {	
				  	printf("\n\n Impossível calcular reajuste - Sexo Indefinido!\n\n");
				  	system("pause");
				  	return 10;
				}

//	Salário Reajustado;

	Salario_Reaj = Salario_Atual + Val_Reajuste;	
	
// Saída de dados
	
	system("cls");	
	printf("\n\n <<  Reajuste Salarial  >>\n");
	
	
	printf("\n Sexo do funcionário.....: %c",sexo);
	printf("\n Salario Atual........ R$: %8.2f",Salario_Atual);
	printf("\n Reajuste................: %8.2f %%",Porc_Reajuste);
	printf("\n Tempo de Empresa........:  %d anos",tempo_empresa);
	printf("\n Valor do Reajuste.... R$: %8.2f",Val_Reajuste);
	printf("\n Salario Reajustado... R$: %8.2f",Salario_Reaj);
	
	
	
	system("cls");
	printf("\n\n <<  Calculo do Reajuste Salarial  >>\n");
	
	
	printf("\n \n \n  Informe o número da matrícula [ 0 = FIM ]: ");
	fflush(stdin);
	scanf("%u", &num_matricula);
	
	printf("\n\n");
	system("pause & cls");
	
	}
		puts("\n Fim do programa! \n");
		return 0;
}
