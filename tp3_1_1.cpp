//Trabajando con cadena de caracteres
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase [100];
    char texto[] = "Ud escribio: ";
    printf("Escriba una frase: ");
    gets (frase);
    printf("%s\n", texto);
    printf("%s\n", frase); //Forma 1 de escribir
    puts(frase); //Forma 2 de escribir
    
    return 0;
}
*/
//Trabajando con cadena de caracteres con reserva de memoria

/*
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *Buff;
    Buff = (char *) malloc(100*sizeof(char));
    printf("Ingrese una frase\n");
    gets(Buff);
    printf("%s\n", Buff); //Forma 1 de escribir
    puts(Buff);
    free(Buff);

    return 0;
}
*/

//reserva dinámica de memoria con variable auxiliar

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *Buff; //variable auxiliar
    char *Nombre;
    char *Apellido;
    Buff= (char *) malloc(100*sizeof(char));
    
    printf("Ingrese sus nombres: ");
    gets(Buff);
    
    Nombre= (char *) malloc((strlen(Buff)+1)*sizeof(char));
    strcpy(Nombre,Buff);
    
    printf("Ingrese sus Apellidos: ");
    gets(Buff);
    
    Apellido= (char *) malloc((strlen(Buff)+1)*sizeof(char));
    strcpy(Apellido,Buff);
    
    printf("escribiendo usando printf\n");
    printf ("%s\n", Buff) ;
    printf ("%s\n", Nombre) ;
    printf ("%s\n", Apellido) ;
    printf("escribiendo usando puts\n");
    puts (Buff);
    puts (Nombre);
    puts (Apellido);
    //libero la memoria reservada en todos los punteros
    free(Buff);
    free(Nombre);
    free(Apellido);
    return 0;
}

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	 
            char *buff;
            char *nombre[5];
             	         
            buff=(char *)malloc(100*sizeof(char));
    
		    printf("Ingrese 5 nombres\n");
		    printf("-----------------\n");
			
		    for(int i=0;i<5;i++)
	        {
			   printf("Ingrese el nombre %d: ",i+1);	
			   gets(buff);   	
			   
			   nombre[i]=(char *)malloc((strlen(buff)+1)*sizeof(char));
			   strcpy(nombre[i],buff);
			}
            
            printf("\n\nListado de nombres\n");	
			printf("-------------------\n");
			
			for(int i=0;i<5;i++)
	        {
		      printf("%d) ",i+1);
		      puts(nombre[i]);
		    }
			 
			for(int i=0;i<5;i++)
	        { 
		       free(nombre[i]);
		    }
			 
            free(buff); 
			 
  return 0;
}