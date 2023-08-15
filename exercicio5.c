#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[30];
    int i = 0;

    printf("Digite uma palavra em maiusculo\n");
    gets(palavra);

    for(i = 0; i < strlen(palavra); i++){
        palavra[i] += 32;
    }

    printf("%s", palavra);
    return 0;
}
