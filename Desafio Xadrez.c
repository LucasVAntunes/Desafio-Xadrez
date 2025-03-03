#include <stdio.h>

int main() {
    
    //Declaração variável de escolha da peça a ser movimentada

    int escolha;

    printf ("Seja bem vindo enxadrista!\n");

    //Estrutura de repetição para fechar o programa somente em caso de escolha do usuário    
    
    do {
    
    //Declaração variáveis de incremento das peças

    int torre = 0;
    int bispo = 0;
    int rainha;
    int cavalo = 1;
    
    //Menu de escolha

    printf ("\nDigite o número referente a peça a ser movimentada:\n\n1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n0. Sair\n\n");
    scanf ("%d", &escolha);

    switch (escolha)
    {

    //Movimento Torre

    case 1:

        printf ("\nVocê escolheu a Torre!\n\n");
        
        do {
            
            printf("Direita\n");
            torre++;

        } while (torre < 5);
        break;
    
    //Movimento Bispo

    case 2:
    
        printf ("\nVocê escolheu o Bispo!\n\n");
        
        while (bispo < 5)
        {
            printf ("Cima\nDireita\n");
            bispo++;
        }
        
        break;
    
    //Movimento Rainha

    case 3:
        
        printf ("\nVocê escolheu a Rainha!\n\n");

        for (rainha = 0; rainha < 8; rainha++)
        {
            printf ("Esquerda\n");
        }
        
        break;

    //Movimento Cavalo

    case 4:
        
        printf ("\nVocê escolheu o Cavalo!\n\n");

        while (cavalo == 1)
        {
            for (int i = 0; i < 2; i++)
            {
                printf ("Baixo\n");
            }
            
            printf ("Esquerda\n");
            cavalo--;

        }
        
        break;

    //Opção de saída do programa

    case 0:

        printf ("\nSaindo do programa...\n\n");
        break;

    //Opção inválida

    default:

        printf ("\nOpção inválida!\n\nSaindo do programa...\n\n");

        break;
    }
    } while (escolha > 0 && escolha <= 4);




return 0;
}