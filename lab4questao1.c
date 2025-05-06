#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int is_sublist(int *vetorA,int *vetorB,int tam,int tam_dois){
    int sublista = 0;
    for(int i = 0;i <= tam_dois - tam;i++){
        int encontrou = 1;
        for(int j = 0;j < tam; j++){
            if(vetorA[j] != vetorB[i + j]){
                encontrou = 0;
                break;
            }
        }
        if(encontrou){
            return i;
        }
    }
    return -1;
}
int main() {
    int tam = 3,tam_dois = 10;
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
    int indice = is_sublist(vetorA,vetorB,tam,tam_dois);
    if (indice == -1) {
        printf("B não é sublista de A.\n");
    } else {
        printf("B é sublista de A a partir do índice %d.\n", indice);
    }
    return 0;
}