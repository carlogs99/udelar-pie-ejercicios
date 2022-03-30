#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* ojo, no hace ningun chequeo sobre el input */

int main(int argc, char** argv){
	unsigned int n = atoi(argv[1]);
	int i = CHAR_BIT*sizeof(UINT_MAX);
	
	printf("Representacion binaria: ");
	while(i--)
		printf("%d", ( (n >> i) & 1 ));
	printf("b\n");
} 
