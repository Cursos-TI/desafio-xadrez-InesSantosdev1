#include <stdio.h>

int main() {

    char peca;
    int movimento = 1;

    printf("Bem vindo ao Xadrez\n\n");

    printf("Escolha qual peça deseja mover\n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("Escolha: \n");
    scanf(" %c", &peca);

    switch (peca)
    {
    case 'T':
    case 't':
        printf("Movendo Torre...\n");
        for(movimento; movimento <= 5; movimento++) {
            printf("Cima %d\n", movimento);
        }
        
        break;
    case 'B':
    case 'b':
        printf("Movendo Bispo...\n");
        while (movimento <= 5)
        {
            printf("Cima direita %d\n", movimento);
            movimento++;
        }
        break;

    case 'R':
    case 'r':
        printf("Movendo Rainda...\n");
        do
        {
            printf("Esquerda %d\n", movimento);
            movimento++;
        } while (movimento <= 8);
        
        break;
    
    default:
        printf("Informe uma opção valida!");
        break;
    }

}