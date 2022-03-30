#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* esta funcion es basicamente la implementada en ej6_a */
void representacion_binaria(unsigned int num){
	int i;
    
	for(i=sizeof(unsigned int)*CHAR_BIT-1 ; i >= 0 ; i--)
		printf("%d", (num >> i) & 1);
		printf("\n");
}

int main(int argc, char* argv[]){
	int n, a, b;
	unsigned int mask; // necesito que sea unsigned para asegurar 
					   // que >> introduzca ceros 
	
	if(argc < 4){
	 	printf("faltan parametros en la entrada\n");
		return 0;
	}
	
	n=atoi(argv[1]);
	a=atoi(argv[2]);
	b=atoi(argv[3]);

	if((a<0) || (b>sizeof(int)*CHAR_BIT-1) || (a>b)){
		printf("Los argumentos deben estar entre 0"
		" y 31 y 'a' debes ser menor igual a 'b' \n");
	}
	else{
		mask = ~0; // 1111 1111 1111 1111 1111 1111 1111 1111
    	mask = mask << a & mask >> (sizeof(unsigned int)*CHAR_BIT-b);
        representacion_binaria(mask & n);
	}
    
    return 0;
}

