#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* haya el digito verificador de una cedula ingresada como argumento en la terminal */

int main(char argc, char** argv){
	int ci[7];
	int s, v, r, i, n;
	
	/* chequea que se haya ingresado una cedula */
	/* asume que el input es del formato correcto */
	if(argc < 2){
		printf("Error! Ingrese una cedula como argumento.\n");
		return -1;
	}
	
	/* convertimos el entero en un arreglo de enteros */
	/* solo funciona para numeros mayores o iguales que cero */
	/* (no existen cedulas negativas por suerte) */
	/* OJO: 4911609 se guarda como: a[0]=9 ... a[6]=4 */
	n = atoi(argv[1]);
	i = 0;
	while (n != 0) {
		ci[i] = n % 10;
		n = n / 10;
		++i;
	}
	
	/* calculamos el digito verificador */
	/* OJO: ver como se guardan los digitos en el arreglo y como cambia la formula dada por la letra */
	s = 2*ci[6] + 9*ci[5] + 8*ci[4] + 7*ci[3] + 6*ci[2] + 3*ci[1] + 4*ci[0];
	r = ((s / 10) + 1) * 10;
	v = (r - s) % 10; /* el %10 es para cubrir el caso de v = 10 que debe dar 0 */  
	
	printf("Calculamos su digito verificador como:\t%d.\n", v);
	
	return 0;
}

