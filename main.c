#include <stdio.h>

int main() {
    int x, y;

    printf("Escribe el primer número: ");
    scanf("%d", &x);

    printf("Escribe el segundo número: ");
    scanf("%d", &y);

    if (x > y)
        printf("El mayor es: %d", x);
    else if (y > x)
        printf("El mayor es: %d", y);
    else
        printf("Son iguales");

    return 0;
}
