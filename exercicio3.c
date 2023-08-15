#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[20];
    char output[9];
    int i, j, cont;
    cont = 0;

    printf("Digite uma palavra: \n");
    gets(palavra);

    for(i = 0; i < strlen(palavra); i++){
        itoa(palavra[i], output, 2);
        //printf("%s\n", output);
        for(j = 0; j < 9; j++){
            if(output[j] == '1'){
                cont++;
            }
        }
    }

    printf("%d", cont);
    return 0;
}
