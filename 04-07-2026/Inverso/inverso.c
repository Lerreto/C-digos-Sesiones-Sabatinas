#include <stdio.h>

int main() {

    int I = 0, n = 0, d = 0, r = 0;

    printf("Ingrese el numero a encontrar el inverso: ");
    scanf("%d", &n);

    int n2 = n;

    for (int i = 0; i < 4; i++) {

        d = n2 / 10;          // Quitamos el ultimo digito
        r = n2 - (d * 10);    // Obtenemos el ultimo digito

        I = I * 10 + r;       // Armamos el numero invertido
        n2 = d;               // Actualizamos el numero
    }

    printf("El inverso de %d es: %d\n", n, I);

    return 0;
}
