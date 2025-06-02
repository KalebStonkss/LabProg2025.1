#include <stdio.h>
#include <string.h>
void preencher_texto(char *memoria_texto,int i, char *texto){
    int k = 0;
    while (texto[i] != '\0' && texto[i] != ' ' && texto[i] != '\n' && texto[i] != ',') {
        memoria_texto[k++] = texto[i++];
    }
    memoria_texto[k] = '\0';
}
int main(){
    //char palavras[2]= {"melancia","kiwi","cereja"};
    char memoria_texto[10];
    char texto[1024];
    puts("Digite seu texto: ");
    fgets(texto,1024,stdin);
    for(int i = 0;texto[i]!='\0';i++){
        if(texto[i] == 'm'){
            preencher_texto(memoria_texto,i,texto);
            if(strcmp(memoria_texto, "melancia") == 0 || strcmp(memoria_texto, "melancias")== 0 || strcmp(memoria_texto, "Melancia") == 0|| strcmp(memoria_texto, "Melancias")== 0){
                for (int j = i; texto[j] != '\0' && texto[j] != ' ' && texto[j] != '\n' && texto[j] != ','; j++) {
                    texto[j] = '*';
                }
            }
        }
        else if(texto[i] == 'k'){
            preencher_texto(memoria_texto,i,texto);
            if(strcmp(memoria_texto, "kiwi") == 0|| strcmp(memoria_texto, "kiwis") == 0 || strcmp(memoria_texto, "Kiwi") == 0|| strcmp(memoria_texto, "Kiwis") == 0){
                for (int j = i; texto[j] != '\0' && texto[j] != ' ' && texto[j] != '\n' && texto[j] != ','; j++) {
                    texto[j] = '*';
                }
            }
        }
        else if(texto[i] == 'c'){
            preencher_texto(memoria_texto,i,texto);
            if(strcmp(memoria_texto, "cereja") == 0 || strcmp(memoria_texto, "cerejas")== 0 || strcmp(memoria_texto, "Cereja") == 0 || strcmp(memoria_texto, "Cerejas")== 0 ){
                for (int j = i; texto[j] != '\0' && texto[j] != ' ' && texto[j] != '\n' && texto[j] != ','; j++) {
                    texto[j] = '*';
                }
            }
        }
    }
    printf("%s",texto);
}