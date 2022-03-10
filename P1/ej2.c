#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* imprime un numero aleatorio entre 1 y 6 */

int main(){

	int n;
	
	srand(time(NULL)); /* le da un seed al RNG (sino da siempre lo mismo) */
	
	n = rand(); /* genera un numero aleatorio entre 0 y RAND_MAX */
	n = n % (6 + 1 - 1) + 1; /* para limitar n al rango 1-6 */
	printf("El dado da: %d\n", n); 
	return 0;
	
}
