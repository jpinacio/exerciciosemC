/*6) Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: não use o comando "if"
ou o operador de condição "?".*/

#include <stdio.h>

int main() {

    float preco, precoInflacionado;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);


    switch ((int)(preco / 100)) {
        case 0:
            precoInflacionado = preco + (preco * 10 / 100);
            printf("O valor do produto ficou de: %.2f.", precoInflacionado);
            break;
        default:
            precoInflacionado = preco + (preco * 20 / 100);
            printf("O valor do produto ficou de: %.2f.", precoInflacionado);
    }

    return 0;
}
