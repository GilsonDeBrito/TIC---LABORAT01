//1 – Faça um programa em C que calcule e mostre a área de um quadrado. Sabese que: A = lado * lado.

#include<stdio.h>
#include<math.h>
int main(){
	float area=0,lado1,lado2;
	printf("Digite a dimensao do primeiro lado e do segundo lado:\n");
	scanf("%f %f",&lado1,&lado2);
	area= lado1*lado2;
	printf("A area do quadrado e = %f ",area);
	return 0;
}