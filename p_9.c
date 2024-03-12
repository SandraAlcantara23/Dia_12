#include <stdio.h>

void factorizar(int n) {
    printf("Los factores de %d son:\n", n);
    
    // Manejar los factores 2 primero
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // n ahora debe ser impar
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // Si n es mayor que 2, entonces es el último factor primo
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    
    factorizar(numero);
    return 0;