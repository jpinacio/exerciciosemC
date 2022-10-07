/*5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere) 
para os códigos de 0 a 127.*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Escreva qualquer caractere: ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
    return 0;
}
