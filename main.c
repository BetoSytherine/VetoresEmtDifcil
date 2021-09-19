#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* char name[40] - apenas uma linha kkkkkkkkkkkkkkk(um valor para colocar em cada psição)
     Array multi-dimensional char name[5][5]  - 5 linhas e 5 colunas
     kkkkk
     kkkkk
     kkkkk
     kkkkk
     kkkkk
    */

    // matrizes são array multi-dimensional
    //char nome[3][50](3 nomes com 50 caracetres) (existem duas dimensoes)
    //char[50](uma dimensão )

    //vetores e strings
    char nome[3][15];
    for(int i = 0; i < 3; i++ ){
    printf("Qual seu nome? ");

    scanf("%s", nome[i]);//gets é usado para armazenar a string que a função vai ler para a gente uma string do standard inpout(do nosso tecaldo), o que digitarmos dentro do gets(gets(nome)) ele ira jogar para dentro do vetor
    //permite passar o limite de caracteres definidos
    //era uma função antiga do C, e da pra usar o scanf.
    }

   for(int i = 0; i < 3; i++){

        printf("ola %s\n", nome[i]);
   }


    //-------------------------------------------------------------


    //vetores e caracteres
    char letra[26];
    int alfabeto = 0;
// alfabeto tabela ASCII
for( int i = 97; i <= 122; i++){
        letra[alfabeto] = i;
alfabeto = alfabeto + 1;


}

for(int i = 0; i < 26; i++){

    printf("%d == %c\n", letra[i], letra[i]);
}

//----------------------------------------------------------------------------------------------------------------





    //vetores de inteiros
    char inteiro[5];
    inteiro[1] = 8;
    inteiro[2] = 6;
    inteiro[3] = 5;
    inteiro[4] = 3;



    //vetores reais
    float reais[5];
    for(int i = 0; i <= 5; i++){
    reais[i] = (float)inteiro[i] / (float)2;
    }

    for(int i = 5; i >= 0; i--){
        printf("%.2f", reais[i]);
    }



    return 0;
}
