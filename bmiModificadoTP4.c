#include <stdio.h>


//Repositorio codigo: https://github.com/VegaGabriel18/TP-INFORMATICA-I/tree/main
int main() {
    float peso, altura, imc;

   
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    
    imc = peso / (altura * altura);

    
    printf("Su IMC es: %.2f\n", imc);


    printf("    \n");
    printf("INDICE       |   CONDICION\n");
    printf("--------------------------\n");
    printf("<18.5            Bajo peso\n");
    printf("18.5 a 24.9      Normal\n");
    printf("25.0 - 29.9      Sobrepeso\n");
    printf(">=30             Obesidad\n");
    printf("   \n ");
    
    if (imc < 18.5) {
        printf("Usted esta en el rango de: Bajo peso\n");
    
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Usted esta en el rango de: Peso normal\n");
        
    } else if (imc >= 25 && imc < 29.9) {
        printf("Usted esta en el rango de: Sobrepeso\n");
    } else {
        
        printf("Usted esta en el rango de: Obesidad\n");
    }

    return 0;
}
