#include <stdio.h>
#include <stdlib.h>

/* imprime en pantalla una cadena de caracteres de largo LARGO_CADENA */
/* formada por concatenaciones de "+----" */

#define LARGO_PATRON 5 /* cantidad de caracteres en el patron */

int main(int argc, char** argv){
	int i;
	int patronesCompletos, resto, largoCadena;
	char* patron = "+----";
	
	if(argc != 2){
		printf("Error: Debe dar la cantidad LARGO de caracteres a imprimir como '~./ LARGO'\n");
		return -1;
	}
	else{
		largoCadena = atoi(argv[1]);
		patronesCompletos = largoCadena / LARGO_PATRON;
		resto = largoCadena % LARGO_PATRON;
		
		printf("\n");
		for(i = 0; i < patronesCompletos + resto; i++)
			if(i < patronesCompletos)
				printf("%s", patron);
			else	
				printf("%c", patron[i-patronesCompletos]);
		printf("\n\n");
		
		return 0;
	}
}
