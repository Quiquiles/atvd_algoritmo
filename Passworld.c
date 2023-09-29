#include <stdio.h>
#include <string.h>

int main()
{
    char senha_salva[100];

    scanf("%s", senha_salva);
    printf("senha cadastrada: %s\n", senha_salva);

    while (1)
    {
        char senha_digitada[100];
        scanf("%s", senha_digitada);

        if (strcmp(senha_digitada, senha_salva) == 0)
        {
            printf("senha valida!\n");
            break;
        }
        else
        {
            printf("senha invalida!\n");
        }
    }

    return 0;
}
