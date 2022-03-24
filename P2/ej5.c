#include <stdio.h>

/* la funcion a implementar es: (w AND x) OR (NOT y) */
/* esto se puede chequear a mano o con alguna calculadora online */

int f(int w, int x, int y){
	return ((w & x) | ~y) & 1; /* "1" actua como mascara */
}

int main(int argc, char** argv){
	char w, x, y;
	
	if(argc != 2){
		printf("Error: numero de argumentos invalido\n"
		"Se espera ./~ wxy\n"
		"donde w, x, y son bits a pasar por la funcion f\n");
		return -1;
	}
	
	w = argv[1][0];
	x = argv[1][1];
	y = argv[1][2];
	
	if((w != '1' && w!= '0') || (x != '1' && x!= '0') || (y != '1' && y!= '0')){
		printf("Error, argumentos invalidos.\n"
		"Deben ingresarse ceros y unos.\n");
		return -1;
	}
	
	printf("El resultado de f es: %d\n", f(w,x,y));
	return 0;	
}
