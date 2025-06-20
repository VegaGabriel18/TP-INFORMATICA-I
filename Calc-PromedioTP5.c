
#include <stdio.h>

int main()

{
    
    int estudiantes;
    int calificacion;
    float promedio;
    
    int notamayor=0;
    int notamenor=100;
    

    int nota=0;
    
    printf("Ingrese la cantidad de estudiantes a evaluar :");
    scanf("%d", &estudiantes);
    
    for( int i=1 ; i<= estudiantes ; i++)
    {
        do{
             printf("Ingrese calificacion del estudiante %d:", i);
        
            scanf("%d", &calificacion);
            
            if(calificacion < 0 || calificacion > 100)
            {
                printf(" Calificación inválida. Debe estar entre 0 y 100.\n");
            }
            
            
        }while (calificacion < 0 || calificacion > 100);
        
       
        nota = (nota + calificacion);
        
        if(calificacion>notamayor)
        {
            notamayor= calificacion;
        
        }
        if(calificacion< notamenor )
        {
            notamenor=calificacion;
        }
        
    }
    
    promedio= (float) nota/ estudiantes;
    printf("El promedio es:%.2f\n", promedio); 
    printf("La nota mayor ingresada fue:%d\n", notamayor);
     printf("La nota menor ingresada fue:%d", notamenor );
    
   
  
    
    

    return 0;
}