#include <stdio.h>

int mod(int op1, int op2); /* devuelve el resultado de op1 MOD op2 */

int main(){	/* programa para testear la funcion mod */
	int m;
	
	m = mod(4,5);
	printf("mod(4,5) = %d\n", m);
	
	return 0;
}

int mod(int op1, int op2){
	return op1-(op1/op2)*op2;
}
