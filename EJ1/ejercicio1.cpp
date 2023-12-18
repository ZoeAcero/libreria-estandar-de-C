#include <iostream>
#include <cstring>

int main() {

    int numero_entero = -5;
    int valor_absoluto = abs(numero_entero);
    printf("El valor absoluto de %d es %d\n", numero_entero, valor_absoluto);

    srand(time(NULL));  // Inicializa la semilla con el tiempo actual
    int numero_aleatorio = rand() % 100 + 1;
    printf("Número aleatorio: %d\n", numero_aleatorio);

    
