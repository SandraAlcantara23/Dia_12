#include <stdio.h>

int main() {
    int cantidad_numeros;
    int numero;
    int suma = 0;
    
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &cantidad_numeros);
    
    printf("Ingrese los numeros:\n");
    for (int i = 0; i < cantidad_numeros; i++) {
        scanf("%d", &numero);
        suma += numero;
    }
    
    printf("La suma de los numeros ingresados es: %d\n", suma);
    
    return 0;
}
