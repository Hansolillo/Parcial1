#include <stdio.h>

void suma();
float resta(float, float);
void multiplicacion();
float division(float, float);

int main() {
    int opcion;
    float num1, num2;

    do {
        printf("\nMenu de Operaciones\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicaciones\n");
        printf("4.- Division\n");
        printf("5.- Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                suma();
                break;

            case 2:
                printf("Ingrese dos numeros: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", resta(num1, num2));
                break;

            case 3:
                printf("Funcion pendiente.\n");
                break;

            case 4:
                printf("Funcion pendiente.\n");
                break;

            case 5:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while(opcion != 5);

    return 0;
}

void suma() {
    float a, b;

    printf("Ingrese dos numeros: ");
    scanf("%f %f", &a, &b);

    printf("Resultado: %.2f\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}