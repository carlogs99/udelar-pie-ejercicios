#include <stdio.h>

/* imprime el resultado de OPERANDO1 MOD OPERANDO2 */

#define OPERANDO1 7
#define OPERANDO2 3

int main(){
	printf("El resultado de %d MOD %d es: %d\n", OPERANDO1, OPERANDO2, (OPERANDO1 - (OPERANDO1/OPERANDO2)*OPERANDO2));
	return 0;
}
