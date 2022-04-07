#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *Buff; //variable auxiliar
    char *Nombre[4];
    char *Apellido[4];
    int i;
    Buff= (char *) malloc(100*sizeof(char));
    
    for(i=0; i<=4; i++)
    {
        printf("Ingrese sus nombres: ");
        gets(Buff);
        
        Nombre= (char *) malloc((strlen(Buff)+1)*sizeof(char));
        strcpy(Nombre[i],Buff);
        
        
        printf("escribiendo usando printf\n");
        printf ("%s\n", Buff) ;
        printf ("%s\n", Nombre) ;
        
        printf("escribiendo usando puts\n");
        puts (Buff);
        puts (Nombre[i]);
        
        //libero la memoria reservada en todos los punteros
        free(Buff);
        free(Nombre[i]);
    
    }
    
    return 0;
}
