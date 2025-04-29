#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ordeneTudo(int *vetor,int tam){
    for(int i = 0;i<tam;i++){
        for(int j = i+1;j<tam;j++){
            if(vetor[j] > vetor[i]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}
int embaralheTudoMuahahaha(int *vetor,int tam){
    for(int i = tam-1;i>0;i--){
        int j = rand() % (i+1);
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}
int main(){
    int tam;
    puts("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    printf("________________________________\n Vetor de entrada \n");
    int vetor[tam];
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        vetor[i] = rand() % 100;
    }
    ordeneTudo(vetor,tam);
    for(int i = 0;i < tam; i++){
        printf("%d \n",vetor[i]);
    }
    embaralheTudoMuahahaha(vetor,tam);
    printf("________________\n Vetor de Saída \n");
    for(int i = 0;i < tam; i++){
        printf("%d \n",vetor[i]);
    }
}