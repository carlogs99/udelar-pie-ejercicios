#include <stdio.h>
#include <math.h>

/* computa el valor de la funcion de densidad de probabilidad de la dist. normal */
/* en un punto de interes: y = (1/(sigma*sqrt(2pi)))*e^((-1/2)*((x-mu)/sigma)^2) */

float normal_function(float mu, float sigma, float x);

int main(){
	float mu = 1.0;
	float sigma = 4.0;
	float x = 2.0;
	
	printf("La funcion normal con mu=%3.1f y sigma=%3.1f evaluada en x=%3.1f vale: %6.3f\n", mu, sigma, x, normal_function(mu, sigma, x));
	
	return 0;
}

float normal_function(float mu, float sigma, float x){
	return (1.0/(sigma*sqrt(2.0*M_PI)))*exp((-1.0/2.0)*pow(((x-mu)/sigma), 2));
}
