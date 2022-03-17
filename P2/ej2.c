#include <stdio.h>

int k; /* variable global */

/* f() usa un valor de a global que sigue existiendo aun despues de salir de la funcion */
/* el valor de a global no se inicializa en ninguna parte, por lo que contiene basura */
/* este valor basura no sabemos cuanto es, solo que se va a ir incrementando */ 
int f(){
	int a;
	a++;
	return a;
}

/* g() inicializa la variable a cada vez que es llamada (variable automatica) */
/* en el contexto de g(), a siempre comienza valiendo 0 y se incrementa a 1 */
int g(){
	int a = 0;
	a++;
	return a;
}

int main() {
	int i;
	
	printf("k=%d\n",k);
	
	/* llama e imprime el retorno de f() 10 veces */
	for (i = 0; i < 10; i++) { 
		printf("a en f() vale %d\n",f());
	}
	
	/* llama e imprime el retorno de g() 10 veces */
	for (i = 0; i < 10; i++) {
		printf("a en g() vale %d\n",g());
	}
}
