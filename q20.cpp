/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char nomes[2][50];

    printf("Digite dois nomes: ");

    for(int i = 0; i < 2; i++) {
        scanf("%s", &nomes[i]);
   
        nomes[i][0] = toupper(nomes[i][0]);
    }

    for(int i = 0; i < 10; i++) {
        if(nomes[0][i] > nomes[1][i]) {
            printf("%s\n%s", nomes[1], nomes[0]);
            break;
        } else if(nomes[1][i] > nomes[0][i]) {
            printf("%s\n%s", nomes[0], nomes[1]);
            break;
        }
    }

    return 0;
}
