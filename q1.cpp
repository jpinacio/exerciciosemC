/*1) Faça um programa que solicite 2 números e informe: a soma dos números, o produto do 
primeiro número pelo quadrado do segundo, o quadrado do primeiro número, a raiz quadrada 
da soma dos quadrados, o seno da diferença do primeiro número pelo segundo e O módulo 
do primeiro número.*/

#include <stdio.h>
#include <math.h>

int main()
{

	float num1, num2;
	
	printf("Numero 1: ");
	scanf("%f", &num1);
	
	printf("Numero 2: ");
	scanf("%f", &num2);
	
	float soma_numeros = num1 + num2;
	float prod_quad = num1 + num2*num2;
	float quad_num1 = num1*num1;
	float soma_quad = num1*num1 + num2*num2;
	float raiz_soma = sqrt (soma_quad);
	float seno = sin(num1) * cos(num2) - sin(num2) * cos(num1);
	float modulo_neg = -(num1);
	
	printf("Soma dos numeros: %f\n", soma_numeros);
	
	printf("Soma do primeiro com quadrado do segundo: %f\n", prod_quad);
	
	printf("Quadrado do primeiro numero: %f\n", quad_num1);

	printf("Raiz quadrada da soma dos quadrados: %f\n", raiz_soma);
	
	printf("O seno da diferenca do primeiro numero pelo segundo: %f\n", seno);
	
	if(num1<0)
	{
		printf("modulo de primeiro numero: %f\n", modulo_neg);
	}
	else
	{
		printf("O modulo do primeiro numero: %f\n", num1);
	}
}

