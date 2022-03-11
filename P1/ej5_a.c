#include <stdio.h>

/* main imprime la cantidad de argumentos y los lista */

int main(char argc, char **argv){
	int n;
	
	printf("Numero de argumentos: %d\n",argc);
	
	n = 0;
	while (n < argc) {
		printf("Argumento %d vale %s\n", n, argv[n]);
		n++;
	}
	
	return n;
}

