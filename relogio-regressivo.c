/*
Programa que realiza uma contagem regressiva personalizada de um número
informado pelo usuário até 0,
simulando um relógio.
Requisitos técnicos:
Criar uma função void contagemRegressiva(int inicio).
Utilizar for ou while para a contagem.
Adicionar uma pausa de 1 segundo (opcional, via sleep()).
Exibir uma mensagem final ao fim da contagem.
*/

#include <stdio.h>
#include <windows.h>

void contagemRegressiva(int inicio)
{
    for (int i = inicio; i >= 0; i--)
    {
        printf("%d\n", i);
        Sleep(1000);
    }
    printf("Tempo esgotado");
}

int main()
{
    int inicio;
    printf("Digite o número escolhido: ");
    scanf("%d", &inicio);

    contagemRegressiva(inicio);
    return 0;
}