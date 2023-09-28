#include <stdio.h>
#include <string.h>

int main() {
    // Declare uma variável para armazenar a senha
    char senha_salva[100];

    // Solicite ao usuário que defina a senha
    scanf("%s", senha_salva);
    printf("senha cadastrada: %s\n", senha_salva);


    
    while (1) {
    	// Solicite ao usuário que insira a senha
    char senha_digitada[100];
    scanf("%s", senha_digitada);

    // Verifique se a senha inserida corresponde à senha armazenada
    if (strcmp(senha_digitada, senha_salva) == 0) {
        printf("senha valida!\n");
        break;
    } else {
        printf("senha invalida!\n");
    }
		}

    return 0;
}