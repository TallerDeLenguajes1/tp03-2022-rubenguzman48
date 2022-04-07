#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
    {
        char *Buff; //variable auxiliar
        char *Nombre[4];
        int i;

        Buff= (char *) malloc(100*sizeof(char));
        
        for(i=0; i<=4; i++)
        {
            printf("Ingrese el nombre N° $i: ");
            gets(Buff);
            
            Nombre= (char*) malloc((strlen(Buff)+1)*sizeof(char));
            strcpy(Nombre[i],Buff);
            
            printf("escribiendo usando puts\n");
            puts (Buff);
            puts (Nombre[i]);
            
            //libero la memoria reservada en todos los punteros
            free(Buff);
            free(Nombre[i]);
        
            i++;
    }
    
    return 0;
}
