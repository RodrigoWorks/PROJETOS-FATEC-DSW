#include <stdio.h>
#include <stdlib.h>

int main(){


int inicio_contagem;

printf("===== Contagem regressiva ===== \n \n ");
printf("Digite um numero para iniciar a contagem: ");
scanf("%d",&inicio_contagem);

for(int i = inicio_contagem; i>=0; inicio_contagem--){
	printf("Numero: %d\n",inicio_contagem);
	i--;
}

system("pause");


}
