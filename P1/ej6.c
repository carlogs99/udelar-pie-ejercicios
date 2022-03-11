#include <stdio.h>

/* imprime uno a uno los digitos decimales de un numero entero dado */

int main(char argc, char **argv){
	int len, i;
	
	/* chequear que se haya ingresado el numero */
	if(argc < 2)
		printf("Error! No ingreso el numero a imprimir despues del ejecutable\n");
	else{
		printf("Numero ingresado: %s\n", argv[1]);
		i = 0;
		while(argv[1][i] != '\0'){
			printf("Digito numero %d:\t%c\n", i, argv[1][i]);
			++i;
		}
			
		/* INCORRECTO! cuando se pasa el array como parametro,
		no funciona sizeof (se pasa el puntero)
		len = sizeof(argv[1])/sizeof(argv[1][0]);
		for(i = 0; i < len; i++)
			printf("Digito numero %d:\t%c\n", i, argv[1][i]); */
	}
	
	return 0;
}
