#include <stdio.h>

int main() {
  int num1, num2;

  // Exercício 1: Números ímpares entre dois números
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  printf("Números ímpares entre %d e %d: ", num1, num2);
  for (int i = num1; i <= num2; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }
  printf("\n");

  // Exercício 2: Número primo
  int n, flag = 0;
  printf("Digite um número: ");
  scanf("%d", &n);
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    printf("%d é um número primo.\n", n);
  } else {
    printf("%d não é um número primo.\n", n);
  }

  // Exercício 3: Padrão de asteriscos
  int n_linhas;
  printf("Digite o número de linhas: ");
  scanf("%d", &n_linhas);
  for (int i = 0; i < n_linhas; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}