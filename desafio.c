#include <stdio.h>

int main() {
    int a,b,aux = 0,flag_positivo = 0,flag_negativo = 0,ciclos = 0,ciclos_excecoes = 0;
    puts("Digite o valor de A: ");
    scanf("%d",&a);
    puts("Digite o valor de B: ");
    scanf("%d",&b);
    int a_salvo = a;
    int b_salvo = b;
    int diferenca = a - b;
    if(a == 0 && b == 0){
        printf("A diferença é zero, não há um valor maior ou menor entre A e B\n");
    }
    if(a == 0 && b != 0){
        ciclos_excecoes = diferenca;
        while(diferenca != 0){
            diferenca--;
            ciclos_excecoes++;
            if(diferenca == 0){
                flag_positivo = 1;
                break;
            }
            else if(ciclos_excecoes == 0){
                flag_negativo = 1;
                break;
            }
        }
    }
    else if(a != 0 && b == 0){
        ciclos_excecoes = diferenca;
        while(diferenca != 0){
            diferenca--;
            ciclos_excecoes++;
            if(ciclos_excecoes == 0){
                flag_negativo = 1;
                break;
            }
            else if(diferenca == 0){
                flag_positivo = 1;
                break;
            }
            else{
                printf("...\n");
            }
        }
    }
    while(a != 0){
        aux = a;
        if(a == 1){
            a++;
        }
        a--;
        ciclos++;
        if(aux == 0){
            break;
        }
        if(aux == 0 && b != 0){
            break;
        }
        if(aux != 0 && b == 0){
            break;
        }
        else if(aux == b){
            printf("A diferença é zero, não há um valor maior ou menor entre A e B \n");
            break;
        }
        else if((diferenca + ciclos) == 0){
            flag_negativo = 1;
            break;
        }
        else if(ciclos == diferenca){
            flag_positivo = 1;
            break;
        }
    }
    if(flag_negativo){
        printf("'A' é menor que 'B'");
    }
    else if(flag_positivo){
        printf("'A' é maior que 'B'");
    }
    else{
        printf("Caso estranho");
    }
    return 0;
}
