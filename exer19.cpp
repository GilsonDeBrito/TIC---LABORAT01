//19 – A série de Fibonacci e´formada pela sequência: 0, 1, 1, 2, 3, 5, 8, 13, 
#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,r,i;
	printf("Digite o valor:\n");
	scanf("%i",&n);
	for(i=0;i<=n;i++){
		r= n1 + n2;
		printf(" %2d",r);
		n1=n2;
		n2=r;
	}
	return 0;
}