#include <stdio.h>

#define NMAX 4

int main(int argc, char** argv){	
	int i;
	char buffer[NMAX];
	
	printf("Buffer inicial (basura): %s\n", buffer);
	
	for(i = 0 ; i < NMAX ; i++){
		buffer[(i+1) % NMAX] = 'X';
		printf("Buffer rellenandose (i = %d): %s\n", i, buffer);
	}
	
	printf("Alimentando buffer con el primer argumento dado y retardo 3:\n");
	i = 0;
	while(argv[1][i] != '\0'){
		buffer[(i) % NMAX] = argv[1][i];
		printf("%c", buffer[ ((i-3) % NMAX + NMAX) % NMAX ]);
		i++;
	}
	printf("\n");
	
	return 0;
}



