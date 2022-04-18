#include <stdio.h>

//matrices de MxN (M filas y N columnas)
#define N 3
#define M 2

//devuelve el elemento (i,j) de una matriz almacenada por filas en X
double elemento(double X[],int i, int j);

int main(int argc, char** argv){
	double X[N*M] = {11.0, 12.1, 13.2, 21.3, 22.4, 23.5};
	
	for(int i = 0 ; i < M; i++){
		for(int j = 0 ; j < N ; j++){
			printf("El elemento (%d, %d) de la matriz X es: %lf\n", i+1, j+1, elemento(X,i,j));
		}
	}
	printf("Luego, el elemento (%d, %d) vale: %lf\n", -10, 23, elemento(X, -10, 23));
	
	return 0;
}

double elemento(double X[],int i, int j){
	//clipeo las coordenadas
	i = (i<0) ? 0 : ((i>M) ? (M-1) : i);
	j = (j<0) ? 0 : ((j>N) ? (N-1) : j);
	
	return X[i*N+j];
}
