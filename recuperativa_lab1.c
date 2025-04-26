#include <stdio.h>
#include <math.h>
//Função
double pot(double base, int exp){
    if(exp % 2 == 0){
        base = fabs(base);
        return pow(base,exp);
    }
    else if(exp % 2 != 0){
        return pow(base,exp);
    }
    return 0;
}

//Código principal

//int main() {  
    //double base;  
    //int exp;  
    //printf("Digite a base: ");  
    //scanf("%lf", &base);  
    //printf("Digite o expoente: ");  
    //scanf("%d", &exp);  

    //double res = pot(base, exp);  
    //printf("%lf elevado a %d é %lf\n", base, exp, res);  
    
    //return 0;  
//}  