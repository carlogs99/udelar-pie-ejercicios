#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int x, i, largo_mensaje, largo_clave;
	//char mensaje[] = "\\DAYH.MU/D]VFL%.CUMK5";
	char mensaje[] = "HASTA LA VISTA, BABY!"; //Aca ponemos el mensaje a encriptar
	char clave[] = "TERMINATOR"; //Aca ponemos la clave
	
	largo_mensaje = strlen(mensaje);
	largo_clave = strlen(clave);
	
	char mensaje_encriptado[largo_mensaje];

	for(i=0 ; i<=largo_mensaje-1 ; i++){
		x = i % largo_clave;
		mensaje_encriptado[i] = (0x3F & clave[x]) ^ mensaje[i];
		// 0x3F = 0011 1111b
	}
	printf("El mensaje encpritado: %s\n", mensaje_encriptado);
	return 0;
}
