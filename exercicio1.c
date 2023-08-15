#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, fatorial, i;
    numero = fatorial = i = 0;

    printf("Digite um numero para calcular seu fatorial:\n");
    scanf("%d", &numero);

    if(numero > 1){
        fatorial = numero;
        for(i = 0; i < numero; i++){
            numero--;
            fatorial *= numero;
        }
    } else{
        fatorial = 1;
    }


    printf("O valor do fatorial eh: %d", fatorial);
    return 0;
}
