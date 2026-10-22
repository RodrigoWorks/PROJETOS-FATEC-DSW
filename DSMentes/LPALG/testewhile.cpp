#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int num = 0,resposta = 0;
	
	printf("Digite um numero menor que 5");
	fflush(stdin);
	scanf("%d", &num);
	
	resposta = num;
	
	while(resposta<=5){
		printf("Numero: \n", num);
		resposta++;
	}
	system("pause");
	return 0;
	
}