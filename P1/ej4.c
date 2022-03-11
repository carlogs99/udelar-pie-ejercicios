#include <stdio.h>
#include <math.h>

#define CONSTANTE -10

/* calcula e imprime la raiz y el inverso de CONSTANTE */
/* chequea que CONSTANTE no sea negativa para la raiz */
/* chequea que CONSTANTE no sea nulo para el inverso */

int main(){
	printf("La constante ingresada es: %d\n", CONSTANTE);
	
	if(CONSTANTE > 0)
		printf("Su raiz vale %6.3f y su inverso %6.3f.\n", sqrt(CONSTANTE), pow(CONSTANTE, -1));
	else if(CONSTANTE < 0)
		printf("Error! El numero ingresado es negativo, su raiz no existe.\nSu inverso vale %6.3f.\n", pow(CONSTANTE, -1));
	else if(CONSTANTE == 0)
		printf("Error! El numero ingresado es cero, su inverso no existe.\nSu raiz vale 0 (duh)\n");
		
	return 0;
}
