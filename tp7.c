
#include <stdio.h>
#define TAM 5

//Repositorio "https://github.com/VegaGabriel18/TP-INFORMATICA-I"
int main()
{   float max=0;
    int codemax=0;
    
    float min=0;
    int codemin=0;
    
    int codigos[TAM]={0};
    float precios[TAM]={0};
    
    printf("Ingrese %d productos, se pedira codigo y precio \n", TAM);
    printf("-----------------------------------------------------------\n");
    for(int i=0; i < TAM ; i++)
    {  
        do{
            printf("Ingrese codigo de barras producto[%d], rango[1-999999999]: ", i+1);
            scanf("%d", &codigos[i]);
            if(codigos[i] < 1 || codigos[i] > 999999999)
            {
                printf("Error. El código de barras debe estar entre 1 y 999999999 \n");
            }
        }while(codigos[i] < 1 || codigos[i] > 999999999);
        do{
            printf("Ingrese precio del producto:");
            scanf("%f",&precios[i]);
            
            if(precios[i] < 0)
            {
                printf("Error. Ingrese un precio > 0\n");
                continue;
            }
            if(i == 0)
             min = precios[i];
            
            
            
            if(precios[i] > max)
            {
                max=precios[i];
                codemax = codigos[i];
            }
            if(precios[i] <= min)
            {
                min=precios[i];
                codemin = codigos[i]; 
            }
            
            
        }while(precios[i] < 0);
        
        printf("-----------------------------------------------------------\n");
    }
    printf("\n");
    printf("%-12s %-12s\n", "CODIGO", "PRECIO");
    for(int i = 0; i < TAM ; i++)
    {
        printf("%-12d %-12.2f\n", codigos[i] , precios[i]);
        
    }
    
    printf("\n");
    printf("El mas caro,   [%d]   PRECIO:%.2f \n", codemax, max );
    printf("El mas barato, [%d]   PRECIO:%.2f \n", codemin , min);
    
    
    return 0;
}