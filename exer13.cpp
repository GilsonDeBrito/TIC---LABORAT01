//13 – Faça um programa que efectue a soma de todos os números ímpares que são
//múltiplos de três e que se encontram no conjunto de 1 ate´500
#include<stdio.h>
int main()
{
	int i,soma=0;
	for(i=1;i<=500;i+=2){
		if(i%3==0){
			soma+=i;
			
		}
	}
	printf(" Soma = %2i",soma);
	return 0;
}