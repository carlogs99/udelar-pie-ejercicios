#include <stdio.h>
#include <stdlib.h>

/* calcula propina total y por persona */
/* espera una entrada de la forma $./propina comensales comida porcentaje */
/* comida y porcentaje se suponen enteros */
/* solo se va a chequear tener la cantidad de argumentos correctos */

int main(char argc, char** argv){
	int comensales, precioComida, porcentaje;
	float propTotal, propPersona, precioTotal, precioPersona;
	
	if(argc < 4){
		printf("Error! Faltan argumentos. Ingresar en el formato:\n$./propina comensales comida porcentaje\n");
		return -1;
	}
	
	comensales = atoi(argv[1]);
	precioComida = atoi(argv[2]);
	porcentaje = atoi(argv[3]);
	
	propTotal = precioComida * (porcentaje / 100.0);
	propPersona = propTotal / ((float)comensales);
	precioTotal = ((float)precioComida) + propTotal;
	precioPersona = precioTotal / (float)comensales;
	
	printf("\n&& Calculador de propinas &&\n------------------------------\n");
	printf(" Cantidad de comensales: %d\n Precio de la comida: %d\n Propina: %d%%\n", comensales, precioComida, porcentaje);
	printf("------------------------------\n");
	printf(" Propina total: %.2f\n Propina por persona: %.2f\n Precio total a pagar: %.2f\n Precio a pagar por persona: %.2f\n\n", propTotal, propPersona, precioTotal, precioPersona);
	
	return 0;
}
