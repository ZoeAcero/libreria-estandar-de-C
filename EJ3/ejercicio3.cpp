#include <iostream>
#include <cstring>
#include <string>

int main() {


    const char* nombre_archivo = "ejemplo.txt";

    // Intenta abrir el archivo en modo lectura
    FILE* archivo = fopen(nombre_archivo, "r");

if (archivo == NULL) {

printf("Error: No se pudo abrir el archivo %s.\n", nombre_archivo);
} else {
    printf("El archivo se abrió correctamente.\n");

    // No olvides cerrar el archivo después de usarlo
    fclose(archivo);
}

    return 0;
}



