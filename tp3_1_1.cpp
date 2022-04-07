#include <stdio.h>
#include <stdlib.h>

/*
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
//Reserva de memoria
///*
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
//*/