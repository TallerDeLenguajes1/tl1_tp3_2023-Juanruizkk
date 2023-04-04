#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 5
int main(){
    char *V[MAX];

    for (int i = 0; i < MAX; i++)
    {
        V[i]= (char *) malloc(sizeof(char)*10);
        printf("Ingrese un nombre");
        gets(V[i]);
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("Nombre:\n");
        puts(V[i]);
        free(V[i]);
    }
    
    
}