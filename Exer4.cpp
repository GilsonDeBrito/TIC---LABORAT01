//4 � Fa�a um programa em C que receba o sal�rio de um funcion�rio, calcule e 
//mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%

#include<stdio.h>
int main(){
	float salarioAtual,aumento,novoSalario;
	printf("Digite o seu salario:\n");
	scanf("%f",&salarioAtual);
	aumento=(salarioAtual * 25)/100;
	novoSalario= salarioAtual + aumento;
	printf("O seu salario atual e de %f e sofreu um aumento de %f e somou um novo salario de %f",salarioAtual,aumento,novoSalario);
	return 0;
}