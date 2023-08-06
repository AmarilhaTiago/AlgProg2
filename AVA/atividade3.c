#include <stdio.h>

int main(){
    int numero, ultimo_numero, penultimo_numero;
    printf("Entre com um numero inteiro: ");

    scanf("%d", &numero);
    ultimo_numero = numero % 10;
    numero = numero / 10;
    penultimo_numero = numero % 10;

    printf("A soma dos dois ultimos digitos do numero e: %d", ultimo_numero + penultimo_numero);
    return 0;
}
