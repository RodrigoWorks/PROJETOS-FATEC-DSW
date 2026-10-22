#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
	Aula 07_1 - Exercício 3 - Framework: 
				
				Elabore um algoritmo para determinar quantos números 
	            inteiros pares existem no conjunto dos números inteiros 
				de 86 e 198.
*/
int main()

{
	setlocale(LC_ALL,"Portuguese");

	unsigned int num_inicial = 86;
	unsigned int num_final = 198;
	unsigned int cont_num_pares =0;


    system("cls");
	puts("\n\n<< Mostrar a quantidade de números pares contidos no conjunto de 86 até 198 >>");
	
// Aqui deverá ser inserida a estrutura lógica de repetição para resolver o problema proposto.    
    while(num_inicial <= num_final)
		{
	    	if(num_inicial % 2 == 0)
		    		++cont_num_pares;
		    		++num_inicial;
		}
	           
    printf("\n\n No conjunto dos números de 86 a 198 existem %d números pares!\n\n",cont_num_pares);
    
    printf("\n\n");
    
    system("pause");
	 
	return 0;
}
