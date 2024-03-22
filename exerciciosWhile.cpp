#include <iostream>

int main() {
  int num, i = 1;

  // Exercício 1: Números pares entre 1 e n
  printf("Digite um número: ");
  scanf("%d", &num);
  printf("Números pares entre 1 e %d: ", num);
  while (i <= num) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
    i++;
  }
  printf("\n");

  // Exercício 2: Soma dos dígitos de um número
  int n, soma = 0;
  printf("Digite um número: ");
  scanf("%d", &n);
  while (n > 0) {
    soma += n % 10;
    n /= 10;
  }
  printf("Soma dos dígitos: %d\n", soma);

  // Exercício 3: Sequência de Fibonacci
  int n_termo, a = 0, b = 1, aux;
  printf("Digite o número de termos da sequência de Fibonacci: ");
  scanf("%d", &n_termo);
  i = 0;
  while (i < n_termo) {
    if (i <= 1) {
      aux = i;
    } else {
      aux = a + b;
      a = b;
      b = aux;
    }
    printf("%d ", aux);
    i++;
  }
  printf("\n");

  return 0;
}