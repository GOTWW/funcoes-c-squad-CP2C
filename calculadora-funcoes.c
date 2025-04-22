#include <stdio.h>
#include <windows.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main()
{
    int opcao, num1, num2;

    do
    {
        printf("\nCalculadora em C\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("Escolha uma conta: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4)
        {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
        }

        switch (opcao)
        {
        case 1:
            printf("Resultado: %d\n", somar(num1, num2));
            break;
        case 2:
            printf("Resultado: %d\n", subtrair(num1, num2));
            break;
        case 3:
            printf("Resultado: %d\n", multiplicar(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %.2f\n", dividir(num1, num2));
            else
                printf("0\n");
            break;
        case 5:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    return (float)a / b;
}
