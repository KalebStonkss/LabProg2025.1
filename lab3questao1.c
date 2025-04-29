#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void no_repeat(int *vetor,int *tam){
    for(int i = 0;i<*tam;i++){
        for(int j = i+1;j<*tam;j++){
            if(vetor[j] == vetor[i]){
                for(int z = j;z<*tam-1;z++){
                    vetor[z] = vetor[z+1];
                }
                (*tam)--;
                j--;
            }
        }
    }
}
int main(){
    int tam;
    puts("Digite o tamanho do vetor: ");
    scanf("%d",&tam);
    printf("________________________________\n\n");
    int vetor[tam];
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        vetor[i] = rand() % 10;
    }
    printf("n = %d \n",tam);
    for (int i = 0; i < tam; i++) {
        printf("%d \n",vetor[i]);
    }
    no_repeat(vetor,&tam);
    printf("--------------------------------------------\n");
    printf("n = %d \n",tam);
    for(int i = 0;i < tam; i++){
        printf("%d \n",vetor[i]);
    }
}