/*10) Faça um programa que receba um número inteiro e que verifique se esse número é par 
ou ímpar. O programa deve informar se o número é par, caso afirmativo informar também se 
é ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menor 
que 50.*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(0, "Portuguese");
	
int n;


printf("digite um numero qualquer: ");
scanf("%d", &n);

if (n%2==0 && n>15)
printf("numero par e maior que 15");
else if (n%2==0 && n<15)
printf("numero par e menor que 15");
else if (n%2!=0 && n>50)
printf("numero impar e maior que 50");
else if (n%2!=0 && n<50)
printf("numero impar e menor que 50");
else
printf("invalido");



}
