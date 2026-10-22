#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
/* 
	Aula 06 - Exercício 1	
				
				Modificar o programa Aula_04_exercico_Calc_Reaj_Sal_1.cpp para aplicar o Reajuste 
				salarial somente para funcionários do Sexo Feminino.
				
				Funcionários do Sexo Masculino não terão reajuste salarial, terão um valor fixo de 
				acréscimo ao seu salário, no valor de R$ 400,00.
				
				Se o Sexo informado por diferente de “M” e “F”, envie a mensagem: 
  					”Impossível calcular reajuste - Sexo Indefinido!” 

*/

int main()

{
	
	setlocale(LC_ALL,"portuguese");		// Requer declaração da biblioteca - <locale.h>
	
// Definição de variáveis e constantes

	float Salario_Atual, 
	      Porc_Reajuste, 
		  Val_Reajuste  = 0, 
		  Salario_Reaj  = 0;
	char sexo;
	unsigned int tempo_casa = 0;
	
	
	system("cls");
	printf("\n\n <<  Calculo do Reajuste Salarial  >>\n");
	
// Entrada de dados	

	printf("\n Informe o Sexo [ M ou F ]..........: ");
	fflush(stdin);
	scanf("%c",&sexo);
	sexo = toupper(sexo);
	
	printf("\n Informe o Salário Atual.............: ");
	fflush(stdin);
	scanf("%f",&Salario_Atual);
	
	printf("Informe o tempo de empresa:............:");
	scanf("%d", &tempo_casa);
	
	if (sexo == 'F' && tempo_casa > 5)
		{
			 Val_Reajuste = Salario_Atual * (8.5 / 100);
			 Salario_Reaj = Salario_Atual + Val_Reajuste;
			 printf("\n \n Voce está no laço FEMININO \n\n");
			 system("pause");
		}
		else
			if (sexo == 'M' && tempo_casa >= 3)
			{
				 Val_Reajuste = Salario_Atual * (9.5 / 100);
				 Salario_Reaj = Salario_Atual + Val_Reajuste;
				 printf("\n \n Voce está no laço MASCULINO \n\n");
				 system("pause"); 
			}
			else{
				printf("\n \n Sexo não informado! \n \n");
				system("pause");
			}
		

// Saída de dados
	
	system("cls");	
	printf("\n\n <<  Reajuste Salarial  >>\n");

	if (sexo == 'F' || sexo == 'M')
	 	{
	 		printf("\n Sexo do funcionário.....: %c",sexo);
			printf("\n Salario Atual........ R$: %8.2f",Salario_Atual);
			printf("\n Reajuste................: %8.2f %%",Porc_Reajuste);
			printf("\n Valor do Reajuste.... R$: %8.2f",Val_Reajuste);
			printf("\n Salario Reajustado... R$: %8.2f",Salario_Reaj);
	 	}

	printf("\n\n");
	
	system("pause");
	
	return 0;
}
