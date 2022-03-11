#include <stdio.h>
#include <math.h>

#define CI 5110616
#define CI_VERIF 0

/* haya el digito verificador de algunas cedulas constantes */
/* version "tonta" hardcodeada */

/* int integerIntoArray(int n, int** ci); */

int main(){
	int ci[7];
	int s, v, r, i, n;
	
	/* convertimos el entero en un arreglo de enteros */
	/* solo funciona para numeros mayores o iguales que cero */
	/* (no existen cedulas negativas por suerte) */
	/* OJO: 4911609 se guarda como: a[0]=9 ... a[6]=4 */
	/* lo trate de hacer como una funcion pero tuve problems */
	n = CI;
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
	
	printf("La CI ingresada es:\t%d.\nCalculamos su digito verificador como:\t%d.\n", CI, v);
	printf("El resultado es:\t%s\n", (v == CI_VERIF) ? "Correcto" : "Incorrecto");
	
	return 0;
}

/*
int integerIntoArray(int n){
	int i;
	
	int len = (int) floor(log10( (float) n )) + 1;
	int arr[len];
	
	i = 0;
	while (n != 0) {
		ci[i] = n % 10;
		n = n / 10;
		++i;
	}
	
	return arr;
}
*/
