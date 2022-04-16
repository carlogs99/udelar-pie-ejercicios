#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

#define PI (float)acos(-1)
#define DELTA (2.0*PI/10000.0)

void makeLUT(unsigned int N, float** lut);
float calcE(unsigned int N, float** lut, float(*interpolacion)(unsigned int, float**, float));
float nearestNborInter(unsigned int N, float** lut, float x);
float linInter(unsigned int N, float **lut, float x);


int main(int argc, char** argv){
	if(argc != 2){
		printf("Error. Uso:\n$./ej7_a N\ndonde N es un entero.\n");
		return -1;
	}
	
	unsigned int N = atoi(argv[1]);
	float* lut = (float*)malloc(N * sizeof(float));
	makeLUT(N, &lut);
	
	printf("Los valores de la tabla son:\n");
	for(int i = 0 ; i < N ; i++){
		printf("%d \t%f\n", i, *(lut+i));
	}
	
	printf("Interpolacion vecino mas cercano con N=%d:\ne=%f\n", N, calcE(N, &lut, nearestNborInter));
	printf("Interpolacion lineal con N=%d:\ne=%f\n", N, calcE(N, &lut, linInter));
	return 0;
}

void makeLUT(unsigned int N, float** lut){	
	for(int i = 0 ; i < N ; i++){
		(*lut)[i] = cosf((2.0 * PI / (float)N) * (float)i) ;
	}
}

float calcE(unsigned int N, float** lut, float(*interpolacion)(unsigned int, float**, float)){
	float x;
	float e = 0;
	for(int i = 0 ; i <= 10000 ; i++){
		x = DELTA * (float)i;
		e += (cosf(x) - interpolacion(N, lut, x))*(cosf(x) - interpolacion(N, lut, x));	
	}
	
	return e;
}

float nearestNborInter(unsigned int N, float** lut, float x){
	float minDif = UINT_MAX; 
	float min;
	for(int i = 0 ; i < N ; i++){
		if(abs(i-x) < minDif){
			min = i;
			minDif = abs(i-x);
		}
	}
	
	return min;
}

float linInter(unsigned int N, float** lut, float x){
	float minDif = UINT_MAX; 
	int x0, x1;
	for(int i = 0 ; i < N ; i++){
		if(abs(i-x) < minDif){
			x0 = i;
			minDif = abs(i-x);
		}
	}	
	x1 = ( abs((x0-1)-x) < abs((x0+1)-x) ) ? (x0-1) : (x0+1);
	return (x1 - x)*(*lut)[x0] + (x - x0)*(*lut)[x1];
}
