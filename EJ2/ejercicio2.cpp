#include <iostream>
#include <cstring>
#include <string>

int main() {
    // Crea dos cadenas de caracteres
    char cadena1[] = "Hola, mundo!";
    char cadena2[] = "Hola, mundo!";

    int resultado_comparacion = strcmp(cadena1, cadena2);

    // Muestra el resultado de la comparación
    if (resultado_comparacion == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    size_t longitud_cadena = strlen(cadena1);

    // Muestra la longitud de la cadena
    printf("La longitud de la cadena \"%s\" es %zu caracteres.\n", cadena1, longitud_cadena);

    return 0;
}


