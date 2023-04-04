#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMA 100

int main(){
    srand(time(NULL));
    int filas = 5;
    int columnas = 12;
    int arreglo[TAMA][TAMA];
    char* meses[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

    //CARGAR//  
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            arreglo[i][j] = rand()%40000 + 10000 ;
        }   
    }
    //MOSTRAR// 

    for (int i = 0; i < filas; i++)
    {
        printf("Anio %d:", i+1);
        for (int j = 0; j < columnas; j++)
        {
            printf(" %s:",meses[j]);
            printf("%6d", arreglo[i][j]);
        }
     printf("\n");   
    }
    
    // Sacar promedio

    for (int i = 0; i < filas; i++)
    {
        int suma = 0;
        float prom = 0;
        for (int j = 0; j < columnas; j++)
        {
            suma += arreglo[i][j];
        }
        prom = (float)suma/12;
        printf("El promedio del anio %s es: %.2f\n", meses[i], prom);
        
    }
    for (int i = 0; i < filas; i++)
    {
        int valormax = 0;
        int valormin = 100000;
        for (int j = 0; j < columnas; j++)
        {
            if (arreglo[i][j]>valormax)
            {
                valormax = arreglo[i][j];
            }
            if (arreglo[i][j]<valormin)
            {
                valormin = arreglo[i][j];
            }
        }
    printf("El valor maximo alcanzado fue: %d en el anio %d y mes %s\n", valormax, i+2018, meses[i]);
    printf("El valor minimo alcanzado fue: %d en el anio %d y mes %s\n", valormin, i+2018, meses[i]);
    
}

return 0;
     
}