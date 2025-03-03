#include <stdio.h>

int main() {
    
//Declaração das variáveis das peças e da escolha da peça a ser movimentada

    int torre, bispo, rainha, escolha;

    printf ("Seja bem vindo enxadrista!\n\n");

    //Estrutura de repetição para fechar o programa somente em caso de escolha do usuário    
    do {

    printf ("Digite o número referente a peça a ser movimentada:\n\n1. Torre\n2. Bispo\n3. Rainha\n0. Sair\n\n");
    scanf ("%d", &escolha);

    switch (escolha)
    {
    case 1:

        printf ("\nVocê escolheu a Torre!\n\n");
        break;
    
    case 2:
    
        printf ("\nVocê escolheu o Bispo!\n\n");
        break;
    
    case 3:
        
        printf ("\nVocê escolheu a Rainha!\n\n");
        break;

    case 0:

        printf ("Saindo do programa...\n\n");
        break;

    default:

        printf ("\nOpção inválida!\n\nSaindo do programa...\n\n");

        break;
    }
    } while (escolha > 0 && escolha <= 3);




return 0;
}