// Online C compiler to run C program online
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
    compute_frequency(vetorA,vetorB,tam,tam_dois);
    printf("Vetor B modificado: \n");
    for(int i = 0;i<tam_dois;i++){
        printf("%d ||",vetorB[i]);
    }
    return 0;
}