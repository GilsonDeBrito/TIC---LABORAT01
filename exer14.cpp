//14 – Faça um programa que recebe 10 números e ache a média dos pares e a 
//média dos ímpares

#include<stdio.h>
int main()
{
	int i,n,quantidadeDePares=0,quantidadeDeImpares=0,somaPar=0,somaImpar=0;
	float mediaPar=0,mediaimpar=0;
	for(i=0;i<10;i++){
		printf("Digite um valor:\n");
		scanf("%i",&n);
		if(n%2==0){
			somaPar+=n;
			quantidadeDePares++;
			mediaPar=somaPar/quantidadeDePares;
		}else{
			somaImpar+=n;
			quantidadeDeImpares++;
			mediaimpar=somaImpar/quantidadeDeImpares;
		}
	}
	printf("A soma de pares = %i\n",somaPar);
		printf("A quantidade de pares = %i\n",quantidadeDePares);
			printf("A soma de impares = %i\n",somaImpar);
				printf("A quantidade de impares = %i\n",quantidadeDeImpares);
					printf("A media de pares = %f\n",mediaPar);
						printf("A media de impares = %f\n",mediaimpar);
	return 0;
}