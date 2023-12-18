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


