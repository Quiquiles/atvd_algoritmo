#include <stdio.h>
#include <string.h>

void salario_a(){
  float valor1, resultado;
  scanf("%f", &valor1); //armazena o valor
  resultado = valor1 + (valor1 * 0.05);
  printf("R$ %.2f\n", resultado);
}

void salario_b(){ 
    float valor1, resultado; 
    scanf ("%f", &valor1); 
    resultado = valor1 + (valor1 * 0.07); 
    printf("R$ %.2f\n", resultado); 
}

void salario_c(){
  float valor1, resultado;
  scanf("%f", &valor1);
  resultado = valor1 + (valor1 * 0.08);
  printf("R$ %.2f\n", resultado); //realizei quebra de linha
}

int main(void) {
  char entrada[15];
  scanf("%s", entrada);

    if (strcmp(entrada, "a") == 0) {
        salario_a();
    } else if (strcmp(entrada, "b") == 0) {
        salario_b();
    }if (strcmp(entrada, "c") == 0) {
        salario_c();
    } 
    
  return 0;
  
} 