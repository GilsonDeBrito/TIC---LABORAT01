//6 � Fa�a um programa em C que receba o custo de um espet�culo teatral e o pre�o
//do convite desse espet�culo. Esse algoritmo devera� calcular e mostrar a 
//quantidade de convites que devem ser vendidos para que, pelo menos, o custo do 
//espet�culo seja alcan�ado.

#include<stdio.h>
int main(){
	float custoDoEspetaculo,precoDoConvite;
	int convitesAvender;
	printf("Digite o custo do espetaculo e o preco dos convites:\n");
	scanf("%f %f",&custoDoEspetaculo,&precoDoConvite);
	convitesAvender= custoDoEspetaculo / precoDoConvite;
	printf("A quantidades de convites que devem ser vendidos e %i \n",convitesAvender);
	if(precoDoConvite * convitesAvender == custoDoEspetaculo){
		printf("A venda de convites e igual ao custo do espetaculo");
	}
	else{
		printf("A venda de convites e inferior ao custo do espetaculo");
	}
	return 0;
}