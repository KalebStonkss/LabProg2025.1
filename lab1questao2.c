#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    char binario;
    int decimal = 0,i = 7;
    printf("Digite um número binário de até 8 bits \n");
    while ((binario = getchar()) != '\n' && binario != EOF){
        decimal = (decimal << 1) | (binario - '0');
        i--;
    }
    if(i == 0 && decimal >= 128){
        decimal = decimal - 256;
    }
    
    printf("O valor decimal é %d \n",decimal);
    return 0;
}
