#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MX 100
int jaUsado(int *vetor,int cont, int num){
    for(int i = 0; i< cont;i++){
        if(vetor[i] == num){
            return 1;
        }
    }
    return 0;
}
int retornaNum(int *vetor, int cont){
    int num = rand() % MX;
    while(jaUsado(vetor,cont,num)){
        num = rand() % MX;
    }
    vetor[cont] = num;
    return num;
}
int main(){
    int vetor[MX],cont = 0;
    srand(time(NULL));
    retornaNum(vetor,cont);
    while(cont < MX){
        printf("Digite a tecla Enter para pegar um número: \n");
        getchar();
        int numero = retornaNum(vetor,cont);
        printf("Número %d: %d\n", cont + 1, numero);
        cont++;
    }
    printf("O programa chegou ao limite de 100 números aleatórios gerados!\n");
    return 0;
}