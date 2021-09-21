//3 – Faça um programa em C que receba o ano de nascimento de uma pessoa e o 
//ano atual, calcule e mostre:
//a) a idade dessa pessoa;
//b) quantos anos ela terá em 2050.

#include<stdio.h>
int main(){
	int anoDeNascimento,anoAtual,idadeAtual,idadeFutura;
	printf("Digite o ano de nascimento e a ano atual:\n");
	scanf("%i %i",&anoDeNascimento,&anoAtual);
	idadeAtual= anoAtual - anoDeNascimento;
	idadeFutura= 2050 - anoDeNascimento;
	printf("A pessoa tem %i anos de idade e tera %i anos de idade",idadeAtual,idadeFutura);
	return 0;
}