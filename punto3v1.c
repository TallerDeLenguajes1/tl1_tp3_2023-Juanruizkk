#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 5
int main(){
    char **vectorNombres;

    char *buff;

    int cant;

    printf("Ingrese la cantidad de nombres a cargar\n");
    scanf("%d", &cant);
    fflush(stdin);

    vectorNombres = malloc(cant*sizeof(char*));
     buff = malloc(100*sizeof(char));
     for (int i = 0; i < cant; i++)
     {
        puts("Ingrese el nombre");
        gets(buff);
        vectorNombres[i]= malloc((strlen(buff)+1)*sizeof(char));
        strcpy(vectorNombres[i], buff);
     }

    for (int i = 0; i < cant; i++)
    {
        printf("Nombre %d: %s\n", i+1, vectorNombres[i]);
        free(vectorNombres[i]);
    }

    free(buff);
    free(vectorNombres);
    
     
    
    
}