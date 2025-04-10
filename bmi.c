#include <stdio.h>
#include <windows.h>

//Vega Gabriel Ezequiel Martin 1R5
int main() {
        float imc;
        float peso , altura;
  
        printf("Bienvenido a la calculadora de IMC\n");
        Sleep(1000);
        printf("Ingrese su peso en kilogramos: ");
        scanf("%f", &peso);

        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);

        printf("El peso y la altura ingresados son: %.2f kg y %.2f m\n", peso, altura);
        Sleep(1000);
        printf("\n");
   
      
           imc=(peso/(altura*altura));
           printf("Tu Indice de masa colporal es: %.2f\n",imc);            
           printf("    \n");
           printf("INDICE       |   CONDICION\n");
           printf("--------------------------\n");
           printf("<18.5            Bajo peso\n");
           printf("18.5 a 24.9      Normal\n");
           printf("25.0 - 29.9      Sobrepeso\n");
           printf(">=30             Obesidad\n");
    
           return 0;
            

}
