#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	
	float salario_atual,salario_reajustado,reajuste;
	
printf(" ======== CALCULO DO SALARIO ==========");
printf("Digite o valor do salario atual: \n");
scanf("%f",&salario_atual);

printf("Digite o valor do reajuste em %: \n");
scanf("%f",&reajuste);

salario_reajustado %= reajuste;

printf("O salario inicial era %.2f ", &salario_atual);	
	
}
