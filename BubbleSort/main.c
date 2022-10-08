#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantidade de valores: ");
    scanf("%i", &n);
    int seq[n];
    int i = 0; int j;
    int ref; int aux; int temp;
    int troca = 1;

    while(i < n){
        seq[i] = rand() % 100;
        i++;
    }

    i = 0;
    printf("Sequencia: ");
    while(i < n){
        printf("\t%i", seq[i]);
        i++;
    }
    printf("\n");
    system("pause");

    while(troca == 1){
        for(i = 0; i < n-1; i++){
            for(j = 0; j < n-i-1; j++){
                if(seq[j] > seq[j + 1]){
                    temp = seq[j];
                    seq[j] = seq[j + 1];
                    seq[j + 1] = temp;
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
        printf("\t%i", seq[i]);
        i++;
    }
    printf("\n");
    system("pause");

}//main
