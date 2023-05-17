#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ingresamos los datos que usaremos
    int x,y;
    int comlumnas,filas;
    //Realizamos la primera parter
    printf("Ingrese el numero de filas:");
    scanf("%d",&filas);

    prinft("Ingrese el numero de comlumnas:");
    scanf("%d",&columnas);

    int matriz[filas columnas];
    for(int x=0; x=filas ; x++){
    
         for(int y=0; y=filas; y++){
           matriz[x][y]=0;
    }         }    
   for (int x=0 ; x < filas ; x++){
         matriz[x][y]=1

   }
   
    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Obtener la matriz
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }
    free(matriz);
 return 0;
}
