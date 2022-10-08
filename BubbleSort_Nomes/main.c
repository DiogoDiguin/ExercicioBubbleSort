#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nomes{
    char nome[20];
};

int main()
{
    int n;
    printf("Quantidade de nomes: ");
    scanf("%i", &n);
    char nomeE[20];
    struct nomes seq[n];
    int i = 0; int j;
    int ref; int aux;
    char temp[20];
    int troca = 1;

    while(i < n){
        printf("Nome: ");
        fflush(stdin);
        gets(nomeE);
        strcpy(seq[i].nome, nomeE);
        i++;
    }

    i = 0;
    printf("Sequencia: ");
    while(i < n){
        printf("\t%s", seq[i].nome);
        i++;
    }
    printf("\n");
    system("pause");

    while(troca == 1){
        for(i = 0; i < n-1; i++){
            for(j = 0; j < n-i-1; j++){
                if(strcmp(seq[j].nome, seq[j+1].nome) == 1){
                    strcpy(temp, seq[j].nome);
                    strcpy(seq[j].nome, seq[j+1].nome);
                    strcpy(seq[j+1].nome, temp);
                    troca = 1;
                }else{
                    troca = 0;
                }
                //printf("\nj = %i", j);
            }
            //printf("\ni = %i", i);
        }
    }

    i = 0;
    printf("\nSequencia: ");
    while(i < n){
        printf("\t%s", seq[i].nome);
        i++;
    }
    printf("\n");
    system("pause");

}//main
