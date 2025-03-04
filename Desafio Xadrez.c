#include <stdio.h>

void movertorre (int casas){
    if (casas > 0){
        printf ("Direita\n");
        movertorre (casas - 1);
    }
}

void moverrainha (int casas){
    if (casas > 0){
        printf ("Esquerda\n");
        moverrainha (casas - 1);
    }
}

void moverbispo (int casas){
    if (casas > 0){
        for (int i = 1; i == 1; i--){
            printf ("Direita\n");
        }
    printf ("Cima\n");
    moverbispo (casas - 1);
    }
}

int main() {
    
    //Declaração variável de escolha da peça a ser movimentada

    int escolha;

    printf ("Seja bem vindo enxadrista!\n");

    //Estrutura de repetição para fechar o programa somente em caso de escolha do usuário    
    
    do {
    
    //Declaração variáveis de incremento das peças

    int cavalo = 1;
    
    //Menu de escolha

    printf ("\nDigite o número referente a peça a ser movimentada:\n\n1. Torre\n2. Bispo\n3. Rainha\n4. Cavalo\n0. Sair\n\n");
    scanf ("%d", &escolha);

    switch (escolha)
    {

    //Movimento Torre

    case 1:

        printf ("\nVocê escolheu a Torre!\n\n");
        
        movertorre (5);
        
        break;
    
    //Movimento Bispo

    case 2:
    
        printf ("\nVocê escolheu o Bispo!\n\n");
        
        moverbispo (5);
        
        break;
    
    //Movimento Rainha

    case 3:
        
        printf ("\nVocê escolheu a Rainha!\n\n");

        moverrainha (8);

        break;

    //Movimento Cavalo

    case 4:
        
        printf ("\nVocê escolheu o Cavalo!\n\n");

        while (cavalo == 1)
        {
            for (int i = 0; i < 2; i++)
            {
                printf ("Cima\n");
            }
            
            printf ("Direita\n");
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