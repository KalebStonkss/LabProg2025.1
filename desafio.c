#include <stdio.h>

int main() {
    int a,b,aux = 0,flag_positivo = 0,flag_negativo = 0,ciclos = 0;
    puts("Digite o valor de A: ");
    scanf("%d",&a);
    puts("Digite o valor de B: ");
    scanf("%d",&b);
    int a_salvo = a;
    int b_salvo = b;
    int diferenca = a - b;
    if(a == 0 && b == 0){
        printf("A diferença é zero, não há um valor maior ou menor entre A e B");
    }
    else if(a == 0){
        printf("A é zero, diferença é %d.\n", -b);
        flag_positivo = 1;
    }
    else if (b == 0) {
        printf("B é zero, diferença é %d.\n", a);
        flag_negativo = 1;
    }
    while(a != 0){
        aux = a;
        if(a == 1){
            a++;
        }
        a--;
        ciclos++;
        printf("Ciclos = %d\n",ciclos);
        if(aux == 0){
            break;
        }
        else if((diferenca + ciclos) == 0){
            flag_negativo = 1;
            printf("A diferença é negativa\n");
            break;
        }
        else if(ciclos == diferenca){
            flag_positivo = 1;
            printf("A diferença é positiva\n");
            break;
        }
    }
    printf("Ciclos totais = %d\n",ciclos);
    if(flag_negativo){
        printf("'A' é menor que 'B'");
    }
    else if(flag_positivo){
        printf("'A' é maior que 'B'");
    }
    else{
        printf("Caso estranho kkkk");
    }
    return 0;
}