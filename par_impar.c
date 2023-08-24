/* Programa que determina si un número es primo*/
#include <stdio.h> /*Biblioteca de c*/
#include <stdbool.h> /*Biblioteca de c*/ 

bool verificarPrimo(int num); /*Función que devuelve el valor de tipo booleano*/ 

int main () {
  int num;
  printf("Ingrese un n%cmero entero: ",163);
  scanf("%d", &num);
  if (num < 0) { /*Consideracion: no acepta numeros negativos, ya que no son numeros primos*/ 
    printf("ERROR. Ingrese un n%cmero positivo",163);
    return 0;
  }
  if (verificarPrimo(num)) {
      printf("El n%cmero %d es primo",163, num);
  } else{
      printf("El n%cmero %d no es primo",163, num);
  }
  return 0;
}

bool verificarPrimo (int num) {
    int i;
    if (num == 0 || num == 1) { 
        return false;
    }
    for (i = 2; i < num; i++) { /* Se verifica que el numero ingresado sea divisible entre 2 o por si mismo */  
        if (num % i == 0 && i != num) { /*Comprueba si la division es exacta*/ 
            return false; /*Si la condición "i" no es iguala "num", entonces el número no es primo y la función devuelve "false"*/
        }
    }
    return true;
}
