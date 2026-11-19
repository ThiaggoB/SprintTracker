#include <stdio.h>


    struct Sprint {
        int pontos;
        int pontosEntregues;
        float percentual;
    };

    void pausar() {
        int caractere;

        printf("\nPressione Enter para voltar ao menu...");
        getchar();
}


    void exibirMenu() {
        printf("========== SPRINTTRACKER ==========\n");
        printf("1 - Registrar sprint\n");
        printf("2 - Consultar sprints\n");
        printf("3 - Relatorio geral\n");
        printf("4 - Melhor e pior sprint\n");   
        printf("5 - Configurar meta\n");
        printf("0 - Sair\n");
    }

    void registrarSprint() {
        
        struct Sprint sprint;
        int caractere;
        int leituraPontos;
        int leituraPontosEntregues;
    
           do {
           
            printf("========== REGISTRAR SPRINT ==========\n");
            printf("Quantidade de pontos da sprint: ");
            if ((leituraPontos = scanf("%d", &sprint.pontos)) != 1) {
                printf("Entrada invalida! Tente novamente. \n");
                while ((caractere = getchar()) != '\n' && caractere != EOF) {
                }
            }

            if (leituraPontos == 1 && (caractere = getchar()) != '\n') {
                printf("Entrada invalida! Tente novamente. \n");
                while ((caractere = getchar()) != '\n' && caractere != EOF) {
                }
                leituraPontos = 0; // Marca a leitura como inválida
            }

            if (leituraPontos == 1 && sprint.pontos <= 0) {
                    printf("Quantidade de pontos da sprint deve ser maior que zero!\n");
                }

           } while (leituraPontos != 1 ||sprint.pontos <= 0 );
            
           do {
                printf("Quantidade de pontos entregues: ");
                if ((leituraPontosEntregues = scanf("%d", &sprint.pontosEntregues)) != 1) {
                    printf("Entrada invalida! Tente novamente. \n");
                    while ((caractere = getchar()) != '\n' && caractere != EOF) {
                    }

                }

                if (leituraPontosEntregues == 1 && (caractere = getchar()) != '\n') {
                    printf("Entrada invalida! Tente novamente. \n");
                    while ((caractere = getchar()) != '\n' && caractere != EOF) {
                    }
                    leituraPontosEntregues = 0; // Marca a leitura como inválida
                }

                if (leituraPontosEntregues == 1 && sprint.pontosEntregues > sprint.pontos) {
                    printf("Quantidade de pontos entregues nao pode ser maior que a quantidade de pontos da sprint!\n");
                }

                if (leituraPontosEntregues == 1 && sprint.pontosEntregues < 0) {
                    printf("Quantidade de pontos entregues nao pode ser negativa!\n");
                }

            } while ( leituraPontosEntregues != 1 ||sprint.pontosEntregues < 0 || sprint.pontosEntregues > sprint.pontos);
        

        sprint.percentual = ((float)sprint.pontosEntregues / sprint.pontos) * 100;
        printf("Percentual de pontos entregues: %.2f%%\n", sprint.percentual);
        printf("Sprint registrada com sucesso!\n");
        pausar();
    }

   
    int main() {
        int opcao;
       do{
        exibirMenu();
        printf("Escolha uma opcaoo: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
           registrarSprint();
        break;
        
        case 2:
         
        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;

        case 0:
            printf("Saindo do programa...\n");
            break;
        
        default:
            printf("Opcao incalida! Tente novamente.\n");
            break;
        }

       }while (opcao != 0);
        
    return 0;
}