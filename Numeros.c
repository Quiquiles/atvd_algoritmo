#include <stdio.h>

int main() {
    int numero1, numero2;
    int primeiroNumeroLido = 0;

    scanf("%d", &numero1);
    primeiroNumeroLido = numero1;
    
    scanf("%d", &numero2);

    if (numero1 == numero2 && primeiroNumeroLido == numero2) {
        printf("Os valores lidos sao iguais\n");
    } else if (numero1 > numero2) {
        printf("%d eh maior que %d\n", numero1, numero2);
    } else {
    	printf("%d eh maior que %d\n", numero2, numero1);
	} 
	
    if (numero1 != numero2) { // Verifica se os números são diferentes
    if (numero1 % numero2 == 0 || numero2 % numero1 == 0) {
        printf("%d eh multiplo de %d\n", numero1, numero2);
    } else {
        printf("%d nao eh multiplo de %d\n", numero2, numero1);
        }
    } 
    
    return 0;
}
