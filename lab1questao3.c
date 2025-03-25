#include <stdio.h>
int main() {
    float valor;
    int n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
    int m1=0,m050=0,m025=0,m010=0,m005=0;
    puts("Digite o valor que deseja em reais: \n");
    scanf("%f",&valor);
    if(valor < 0){
        printf("Valor inválido, digite um valor positivo");
    }
    
    int centavos = valor * 100;
    while(centavos >= 20000){
        centavos -= 20000;
        n200++;
    }
    while(centavos >= 10000){
        centavos -= 10000;
        n100++;
    }
    while(centavos >= 5000){
        centavos -= 5000;
        n50++;
    }
    while(centavos >= 2000){
        centavos -= 2000;
        n20++;
    }
    while(centavos >= 1000){
        centavos -= 1000;
        n10++;
    }
    while(centavos >= 500){
        centavos -= 500;
        n5++;
    }
    while(centavos >= 200){
        centavos -= 200;
        n2++;
    }
    while(centavos >= 100){
        centavos -= 100;
        m1++;
    }
    while(centavos >= 50){
        centavos -= 50;
        m050++;
    }
    while(centavos >= 25){
        centavos -= 25;
        m025++;
    }
    while(centavos >= 10){
        centavos -= 10;
        m010++;
    }
    while(centavos >= 5){
        centavos -= 5;
        m005++;
    }
    
    printf("Total de notas necessárias: \n");
    printf("Notas de 200 = %d \n",n200);
    printf("Notas de 100 = %d \n",n100);
    printf("Notas de 50 = %d \n",n50);
    printf("Notas de 20 = %d \n",n20);
    printf("Notas de 10 = %d \n",n10);
    printf("Notas de 5 = %d \n",n5);
    printf("Notas de 2 = %d \n",n2);
    printf("Moedas de 1 = %d \n",m1);
    printf("Moedas de 0.50 = %d \n",m050);
    printf("Moedas de 0.25 = %d \n",m025);
    printf("Moedas de 0.10 = %d \n",m010);
    printf("Moedas de 0.05 = %d \n",m005);
    
}
