#include <stdio.h>
//função inicial com uma saudação personalizada
void boasVindas(char nome[]){
    printf("Olá %s seja bem-vino(a), vamos descobirr a sua média e sua situação \n", nome);
}

//função para calcular a média
float calcularMedia(float n1, float n2, float n3){
   float media = (n1 + n2 + n3) / 3;
   return media;
}

//função para avaliar e eibir o resultado
void exibirResultado(float media){
    if (media >= 8) {
        printf("Parabéns aluno aprovado com a média %.2f", media);
    }else if (media >= 6) {
        printf("Atenção! Aluno em recuperação com a média %.2f", media );
    }else{
        printf("Aluno reprovado com a média %.2f", media);
    }  
}

int main (){
    // Entrando com o nome do aluno
    char nome[50];
    printf("Digite seu nome: "); 
    scanf("%49s", nome);

    // Chamando a função de saudação
    boasVindas(nome);

    // Entrando com as notas do aluno
    float not1, not2, not3;
    printf("Qual foi a sua primeira nota? ");
    scanf("%f", &not1);
    printf("Qual foi a sua segunda nota? ");
    scanf("%f", &not2);
    printf("Qual foi a sua terceira nota? ");
    scanf("%f", &not3);

    // Calculando e exibindo o resultado
    float media = calcularMedia(not1, not2, not3);
    exibirResultado(media);

    return 0;
}