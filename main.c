#include <stdio.h>
#include <string.h>
//Sergio Mirabelo (rm: 562161), Erick Gimenez (rm: 564748), Tomazzo Canterucci (rm: 565566)
int main() {
    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1 - Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Palindromo\n");
        printf("4 - Substring\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int N;
                printf("Digite N (1 a 50): ");
                scanf("%d", &N);
                int fib[50];
                fib[0] = 0;
                if (N > 1) fib[1] = 1;
                for (int i = 2; i < N; i++) {
                    fib[i] = fib[i - 1] + fib[i - 2];
                }
                printf("Fibonacci: ");
                for (int i = 0; i < N; i++) printf("%d ", fib[i]);
                printf("\n");
                break;
            }
            case 2: {
                int N;
                printf("Digite N (1 a 20): ");
                scanf("%d", &N);
                unsigned long long f = 1;
                printf("Fatoriais:\n");
                for (int i = 1; i <= N; i++) {
                    f *= i;
                    printf("%d! = %llu\n", i, f);
                }
                break;
            }
            case 3: {
                char palavra[101];
                printf("Digite uma palavra: ");
                scanf("%s", palavra);
                int len = strlen(palavra);
                int palindromo = 1;
                for (int i = 0; i < len / 2; i++) {
                    if (palavra[i] != palavra[len - i - 1]) {
                        palindromo = 0;
                        break;
                    }
                }
                if (palindromo)
                    printf("A palavra e um palindromo.\n");
                else
                    printf("A palavra nao e um palindromo.\n");
                break;
            }
            case 4: {
                char str1[201], str2[101];
                printf("Primeira string: ");
                scanf("%s", str1);
                printf("Segunda string: ");
                scanf("%s", str2);
                if (strstr(str1, str2))
                    printf("A segunda string esta contida na primeira.\n");
                else
                    printf("A segunda string nao esta contida na primeira.\n");
                break;
            }
            case 0:
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
    return 0;
}
