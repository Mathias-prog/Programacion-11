#include <stdio.h>

int main() {
    int num1, num2;
    
    // Solicitar los dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    // Calcular e imprimir la suma y la multiplicación
    printf("La suma es: %d\n", num1 + num2);
    printf("La multiplicación es: %d\n", num1 * num2);
    
    return 0;
}
