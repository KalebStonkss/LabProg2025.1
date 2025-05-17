#include <stdio.h>

void cebolinha(char *nome){
    int letraAnterior = 0;
    for(int i = 0;nome[i] != '\0';i++){
            if(nome[i] == 'r'){
                nome[i] = 'l';
                letraAnterior = nome[i];
                i++;
                //em outras palavras, esse if avalia se a posição atual da palavra tem a letra "R". Se houver, a função troca o "R" por "L" e salva como uma memória para o próximo caso, a posição vai ser acrescentada em 1 após a troca da letra para fazer a comparação no próximo if
            }
            if(letraAnterior == 'l' && nome[i] == 'r'){
               for(int j = i;nome[j] != '\0';j++){
                   nome[j] = nome[j+1];
               }
               //nesse if, a letra da posição anterior à atual é comparada com a letra da posição atual, caso a letra anterior seja "L" e a letra atual seja "R", o programa irá mover uma posição à esquerda os caracteres da posição atual em diante 
            }
    }
}
int main() {
    char nome[50];
    puts("Digite qualquer nome");
    fgets(nome,50,stdin);
    cebolinha(nome);
    printf("Nome modificado: %s\n",nome);
    return 0;
}