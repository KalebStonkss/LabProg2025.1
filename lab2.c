#include <stdio.h>
#include <string.h>
void inserirNormal(int senha_pos,char senha_normal_vetor[][10], int *tam){
    //printf("Essa é a função inserirNormal :D \n\n");
    printf("Você recebeu a senha normal N%d \n\n",senha_pos);
    if(*tam < 1000){
        sprintf(senha_normal_vetor[*tam], "N%d",senha_pos);
        (*tam)++;
    } 
    else {
        printf("Atingiu o limite ;-;");
    }
}
void inserirPrioridade(int senha_pos,char senha_prioridade_vetor[][10], int *tam){
    int senha_pos_p = senha_pos++;
    //printf("Essa é a função inserirPrioridade :D \n");
    printf("Você recebeu a senha prioridade P%d \n\n",senha_pos_p);
    if(*tam < 1000){
        sprintf(senha_prioridade_vetor[*tam], "P%d",senha_pos_p);
        (*tam)++;
    }
    else {
        printf("Atingiu o limite ;-;");
    } 
}
void consumirSenha(char senha_normal_vetor[][10],char senha_prioridade_vetor[][10],int *tam_n,int *tam_p){
    static int flag = 0;
    //printf("Essa é a função consumirSenha :D \n");
    if(flag == 0 && *tam_n > 0){
        printf("\n Chamando senha %s \n\n",senha_normal_vetor[0]);
        for(int i = 0;i<*tam_n;i++){
            strcpy(senha_normal_vetor[i],senha_normal_vetor[i+1]);
        }
        (*tam_n)--;
        flag = 1;
    }
    else if(flag == 1 && *tam_p > 0){
        printf("\n Chamando senha %s \n\n",senha_prioridade_vetor[0]);
        for(int i = 0;i<*tam_p;i++){
            strcpy(senha_prioridade_vetor[i],senha_prioridade_vetor[i+1]);
        }
        (*tam_p)--;
        flag = 0;
    }
    else if(flag == 0 && *tam_n == 0 && *tam_p > 0){
        printf("As senhas normais acabaram \n");
        flag = 1;
        consumirSenha(senha_normal_vetor, senha_prioridade_vetor, tam_n, tam_p);
    }
    else if(flag == 1 && *tam_p == 0 && *tam_n > 0){
        printf("As senhas de prioridade acabaram \n");
        flag = 0;
        consumirSenha(senha_normal_vetor, senha_prioridade_vetor, tam_n, tam_p);
    }
    else{
        printf("\n ||Todas as senhas acabaram!|| \n");
    }
}
void visualizarSenha(char senha_normal_vetor[][10],char senha_prioridade_vetor[][10], int tam_n,int tam_p){
    //printf("Essa é a função visualizarSenha :D \n");
    printf("Senhas normais: \n");
    for(int i=0;i<tam_n;i++){
        printf(" %s\n",senha_normal_vetor[i]);
    }
    printf("Senhas prioridade: \n");
    for(int i=0;i<tam_p;i++){
        printf(" %s\n",senha_prioridade_vetor[i]);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int senha_pos = 1,tam_n = 0,tam_p = 0;
    char senha_normal_vetor[1000][10],senha_prioridade_vetor[1000][10];
    while(1){
        char op;
        puts("--Menu das senhas-- \n Digite N para inserir uma senha normal \n Digite P para inserir uma senha prioridade \n Digite C para consumir uma senha \n Digite S para sair do programa \n Digite V para visualizar todas as senhas que não foram consumidas ainda");
        scanf(" %c",&op);
        switch(op){
            case 'n':
            case 'N':
                inserirNormal(senha_pos,senha_normal_vetor,&tam_n);
                senha_pos++;
                break;
            case 'p':
            case 'P':
                inserirPrioridade(senha_pos,senha_prioridade_vetor,&tam_p);
                senha_pos++;
                break;
            case 'c':
            case 'C':
                consumirSenha(senha_normal_vetor,senha_prioridade_vetor,&tam_n,&tam_p);
                break;
            case 's':
            case 'S':
                return 1;
            case 'v':
            case 'V':
                visualizarSenha(senha_normal_vetor,senha_prioridade_vetor,tam_n,tam_p);
                break;
            default:
                printf("O caractere digitado não corresponde aos comandos do menu");
                break;
        }
    }
}
