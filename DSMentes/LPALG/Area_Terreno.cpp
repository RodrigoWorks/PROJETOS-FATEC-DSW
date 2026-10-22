/* 
   Aula 3 - Exercício 1/0 (Framework)
   
   		     	Elabore um Algoritmo, na forma de descrição narrativa, 
				para calcular e mostrar, a área total de um terreno retangular, 
				e sabendo-se que a área ocupada desse terreno corresponde a 70%
				da área total, então, calcule e mostre, também, sua área livre.
				 
				Considerar as medidas: comprimento e largura do terreno, 
				em metro linear.

*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
		
	setlocale(LC_ALL,"Portuguese");	
	
// Aqui... Definição de variáveis

    float area_Total, area_Livre, cumprimento, largura;

// Aqui... Lógica do Algoritmo

	system("cls");				// Limpeza inicial de Tela
	
    printf("\n << Programa para calcular a Área Total e Área Livre de um Terreno Retangular >>");
    
    printf("\nDigite os seguinte dados do Terreno:");         
	
	printf("\n\nInforme a Largura do Terreno (em metro linear).....: ");
	fflush(stdin);
    scanf("%f",&largura);                 
    
	printf("Informe o Comprimento do Terreno (em metro linear).: ");
    fflush(stdin);
	scanf("%f",&cumprimento);         
      	   
  	area_Total = cumprimento * largura;	// calcula área do terreno    
	area_Livre = area_Total * 0.3;			// calcula área livre

// Aqui... Saída de dados

	printf("\n\nÁrea Total do Terreno (em metro quadrado): %.3f",area_Total);
	printf("\n\nÁrea Livre do Terreno (em metro quadrado): %.3f \n",area_Livre);
 
    return 0;
}
