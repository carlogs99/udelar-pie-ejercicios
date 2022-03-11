#include <stdio.h>
#include <stdlib.h>

/* recibe un precio en plaza y retorna el valor original sin IVA */
/* precioPlaza = "1.IVA" * precioOriginal */
/* se debe ingresar en la terminal: ./ej5_b.c IVA precioPlaza */

int main(char argc, char **argv) {
	float IVA;
	float precioPlaza;
	
	if(argc < 3){
		printf("Error! Debe ingresar el valor del IVA como decimal (ej: 0.22) y el precio en plaza en el formato:\t./*** IVA precioPlaza\n");
	}
	else{
		IVA = atof(argv[1]);
		precioPlaza = atof(argv[2]);
		printf("Usted ingreso los siguientes datos:\nValor del IVA: %6.3f\nPrecio del producto en plaza: %6.3f\nEl precio original es: %6.3f.\n", IVA, precioPlaza, (precioPlaza/(1.0+IVA)));
	}
	
	return 0;
}
