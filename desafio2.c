#include <stdio.h>
double ache_raiz(double x){
    if(x >= 0){
        double r = x;
        double aprox = 0.000001;
        
        while((r * r - x) > aprox || (x - r*r) > aprox){
            r = 0.5 * (r+x/r);
        }
        
        return r;
    }
    return -1;
}
int main() {
    double num;
    printf("Digite um número: ");
    scanf("%lf", &num);
    double raiz = ache_raiz(num);

    if (raiz == -1) {
        printf("Erro: Não dá para calcular raíz negativa\n");
    } else {
        printf("Raiz quadrada aproximada de %.6f: %.6f\n", num, raiz);
    }

    return 0;
}