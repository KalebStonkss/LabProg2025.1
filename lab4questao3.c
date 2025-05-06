#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int compute_frequency(int *vetorA,int *vetorB,int tam,int tam_dois){
    for(int i = 0;i < tam_dois;i++){
        int cont = 0;
        for(int j = 0;j < tam; j++){
            if(vetorA[j] == vetorB[i]){
                cont++;
            }
        }
        vetorB[i] = cont;
    }
}
int print_frequency(int *vetorA,int tam){
    int cont[tam];
    int vetorSemRepeticao[tam];
    int tamSemRepeticao = tam;
    for (int i = 0; i < tam; i++) {
        vetorSemRepeticao[i] = vetorA[i];
    }
    
    //parte da contagem
    for(int i = 0;i<tam;i++){
        cont[i] = 1;
        for(int j = i+1;j<tam;j++){
            if(vetorA[i] == vetorA[j]){
                cont[i]++;
            }
        }
    }
    
    //parte para gerar o vetor sem repetições
    for(int i = 0;i<tamSemRepeticao;i++){
        for(int j = i+1;j<tamSemRepeticao;j++){
            if(vetorSemRepeticao[i] == vetorSemRepeticao[j]){
                for(int z = j; z < tamSemRepeticao-1;z++){
                    vetorSemRepeticao[z] = vetorSemRepeticao[z+1];
                }
                tamSemRepeticao--;
                j--;
            }
        }
    }
    
    for(int i = 0;i<tamSemRepeticao;i++){
        printf("%d = ",vetorSemRepeticao[i]);
        for(int j = 0; j < cont[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Vetor A sem repetição: \n");
    for(int i = 0;i<tamSemRepeticao;i++){
        printf("%d ||",vetorSemRepeticao[i]);
    }
}
int main() {
    int tam = 4,tam_dois = 10;
    int vetorA[tam];
    int vetorB[tam_dois];
    srand(time(NULL));
    for(int i = 0;i<tam;i++){
        vetorA[i] = rand() % 5;
    }
    for(int i = 0;i<tam_dois;i++){
        vetorB[i] = rand() % 3;
    }
    printf("Vetor A: \n");
    for(int i = 0;i<tam;i++){
        printf("%d ||",vetorA[i]);
    }
    printf("\n\n\n");
    printf("Vetor B: \n");
    for(int i = 0;i<tam_dois;i++){
        printf("%d ||",vetorB[i]);
    }
    printf("\n\n\n");
    compute_frequency(vetorA,vetorB,tam,tam_dois);
    printf("Vetor B modificado: \n");
    for(int i = 0;i<tam_dois;i++){
        printf("%d ||",vetorB[i]);
    }
    printf("\n\n\n");
    print_frequency(vetorA,tam);
    return 0;
}