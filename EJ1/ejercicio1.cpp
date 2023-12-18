#include <iostream>


int main() {

    int numero_entero = -5;
    int valor_absoluto = abs(numero_entero);
    printf("El valor absoluto de %d es %d\n", numero_entero, valor_absoluto);

    srand(time(NULL));  // Inicializa la semilla con el tiempo actual
    int numero_aleatorio = rand() % 100 + 1;
    printf("Número aleatorio: %d\n", numero_aleatorio);

    unsigned int nueva_semilla = 123;
    srand(nueva_semilla);

    int nuevo_numero_aleatorio = rand() % 100 + 1;
    printf("Nuevo número aleatorio después de cambiar la semilla: %d\n", nuevo_numero_aleatorio);

    return 0;
}
