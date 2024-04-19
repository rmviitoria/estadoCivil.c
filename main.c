/******************************************************************************

Crie um programa que solicita o estado civil de 20 pessoas pelo teclado. O usuário deve digitar um destes caracteres: 
S para pessoa Solteira
C para pessoa casada
D para pessoa divorciada
V para pessoa viúva
Qualquer outro caractere digitado não representa um estado civil válido
Ao final, imprima a quantidade de pessoas solteiras, casadas, divorciadas e viúvas (nesta ordem)

*******************************************************************************/
#include <stdio.h>


int main() {
    char estado_civil;
    int solteiras = 0, casadas = 0, divorciadas = 0, viuvas = 0;

    printf("Digite o estado civil de 20 pessoas:\n");
    for (int i = 0; i < 20; i++) {
        printf("Pessoa %d: ", i + 1);
        scanf(" %c", &estado_civil); 

        switch (estado_civil) {
            case 'S':
                solteiras++;
                break;
            case 'C':
                casadas++;
                break;
            case 'D':
                divorciadas++;
                break;
            case 'V':
                viuvas++;
                break;
            default:
                printf("Estado civil inválido.\n");
        }
    }

