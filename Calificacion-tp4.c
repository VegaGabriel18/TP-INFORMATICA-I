#include <stdio.h>



//VEGA GABRIEL EZEQUIEL MARTIN 1R5

int main(){
float nota;
    
    printf("Ingrese la calificacion:");
    scanf("%f", &nota);
    
    if(nota >= 90)
    {
        printf("Calficacion: A");
    }
    else if(nota >= 80 && nota <90)
    {
        printf("Calificacion: B");
    }
    else if(nota >= 70 && nota <=80)
    {
        printf("Calificacion: C");
    }
    else if(nota >= 60 && nota < 70)
    {
        printf("Calificacion: D");
    }
    else if(nota < 60)
    {
        printf("Calificacion: F");
    }
   

}