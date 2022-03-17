#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* toma un argumento desde la linea de comandos e indica al usuario
el tipo de entero mas chico capaz de respresentarlo */

/* los posibles tipos de datos que se consideran son:
>long long int signed, 
>long int signed/unsigned, 
>int signed/unsigned,
>short int signed/unsigned, 
>char signed/unsigned */

int main(int argc, char** argv){
	long long int input;
	int negative;
	
	if(argc != 2){
		printf("Error: Entrada en formato incorrecto.\nDebe ingresar un numero entero N como:\n./~ N\n");
		return -1;
	}
	else{
		input = atoll(argv[1]);
		negative = (argv[1][0] == '-') ? 1 : 0;
		
		printf("Limites de tipos en esta maquina:\nSCHAR_MIN:%d\nUCHAR_MAX:%d\nSHRT_MIN:%hi\nUSHRT_MAX:%hu\nINT_MIN:%d\nUINT_MAX:%u\nLONG_MIN:%ld\nULONG_MAX:%lu\nLLONG_MIN:%lld\n", SCHAR_MIN, UCHAR_MAX, SHRT_MIN, USHRT_MAX, INT_MIN, UINT_MAX, LONG_MIN, ULONG_MAX, LLONG_MIN);
		
		if(negative){
			if(input >= SCHAR_MIN){
				printf("El tipo mas chico posible es signed char!\n");
				return 0;
			}
			else if(input >= SHRT_MIN){
				printf("El tipo mas chico posible es signed short int!\n");
				return 0;
			}		
			else if(input >= INT_MIN){
				printf("El tipo mas chico posible es signed int!\n");
				return 0;
			}
			else if(input >= LONG_MIN){
				printf("El tipo mas chico posible es signed long int!\n");
				return 0;
			}		
			else if(input >= LLONG_MIN){
				printf("El tipo mas chico posible es signed long long int!\n");
				return 0;
			}
		}
		else{
			if(input <= UCHAR_MAX){
				printf("El tipo mas chico posible es unsigned char!\n");
				return 0;
			}
			else if(input <= USHRT_MAX){
				printf("El tipo mas chico posible es unsigned short int!\n");
				return 0;
			}
			else if(input <= UINT_MAX){
				printf("El tipo mas chico posible es unsigned int!\n");
				return 0;
			}
			else if(input <= ULONG_MAX){
				printf("El tipo mas chico posible es unsigned long int!\n");
				return 0;
			}			
		}
	}
}
