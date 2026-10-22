#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char operacao;
float numUm, numDois, resultado;

int main(){
	system("cls");
	
	printf("CALCULADORA \n\n");
	
	printf("Escolha a operacao matematica que deseja realizar \n\n");
	printf(" +   para Adicao \n");
	printf(" -  para Subtracao\n");
	printf(" *  para Multiplicacao\n");
	printf(" /  para Divisao \n \n");
	
	printf("Qual a operacao que deseja realizar?  ");
	fflush(stdin);
	scanf("%c",&operacao);
	
	if(operacao == '+' || operacao == '-' ||operacao == '*' || operacao == '/'){
		
		printf("Digite o primeiro numero: ");
		fflush(stdin);
		scanf("%f", &numUm);
	
		printf("Digite o segundo numero: ");
		fflush(stdin);
		scanf("%f", &numDois);
				
		
		if(operacao == '+'){
			
			resultado = numUm+numDois;
			
			printf("A soma de %.0f + %.0f = %.0f \n \n",numUm,numDois,resultado);
			system("pause");
			return 0;
			
		}
		else if(operacao == '-'){
			resultado = numUm-numDois;
			printf("A subtracao de %.1f - %.0f = %.0f \n \n",numUm,numDois,resultado);
			system("pause");
			return 0;
		}
		else if(operacao == '*'){
			resultado = numUm*numDois;
			printf("A multiplicacao de %.0f x %.0f = %.0f \n \n",numUm,numDois,resultado);
			system("pause");
			return 0;
		}
		else if(operacao == '/'){
			resultado = numUm/numDois;
			printf("A divisao de %.0f / %.0f = %.0f \n \n",numUm,numDois,resultado);
			system("pause");
			return 0;
		}
		else{
			printf("\n \nNAO FOI DIGITADO UM COMANDO VALIDO! \n \n Programa encerrado. \n \n");
			system("pause");
			return 0;
		}		
	}else{		
		printf("Comando digitado invalido! \n \n Programa encerrado! \n \n");
		system("pause");
		return 0;
	}	
}