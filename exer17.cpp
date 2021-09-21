//17 – Escreva um programa que leia um valor inicial A e mostre a sequência de 
//valores do cálculo de A! e o seu resultado. Ex: 5 x 4 x 3 x 2 x 1 = 120

#include<stdio.h>
int main()
{
	int f,i,n,r=0;
	printf("Digite um numero:\n");
	scanf("%i",&n);
	f=1;
	for(i=n;i>=1;i--){
    printf("%2i * ",i);
	f=f*i;
	}
	printf("\n%i",f);
	return 0;
}