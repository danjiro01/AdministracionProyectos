/* Programa que determina si un número es primo*/
#include <stdio.h>
#include <stdbool.h>

bool verificarPrimo(int num); 

int main () {
  int num;
  printf("Ingrese un número entero: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("ERROR. Ingrese un número positivo");
    return 0;
  }
  if (verificarPrimo(num)) {
      printf("El número %d es primo", num);
  } else{
      printf("El número %d no es primo", num);
  }
  return 0;
}

bool verificarPrimo (int num) {
    int i;
    if (num == 0 || num == 1) { 
        return false;
    }
    for (i = 2; i < num; i++) { /* Se verifica que el numero ingresado sea divisible por 2 */  
        if (num % i == 0 && i != num) { 
            return false;
        }
    }
    return true;
}
