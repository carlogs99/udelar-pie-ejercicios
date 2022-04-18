#define N 10
#define M 3
int numeritos[N] = {-1,1,3,1,2,0,0,1,2,2};

void calcular_histograma(int x[], int m, int n, int (*f)[M]);

int main(){
	int i;
	int f[M]; /* frecuencias */
	float P[M]; /* probabilidades */
	
	calcular_histograma(numeritos,M,N,&f);
	
	for (i = 0; i < M; ++i) {
		P[i] = (float)f[i]/(float)N;
		printf("frecuencia f[%d]=%d -> probabilidad P[%d]=%f\n",i,f[i],i,P[i]);
	}
}

void calcular_histograma(int x[], int m, int n, int (*f)[M]){
	//inicializar el arreglo de frecuencias
	for(int j = 0 ; j < m ; j++){
		(*f)[j] = 0;
	}
	//crear el histograma clipeando x
	for(int i = 0 ; i < n ; i++){
		x[i] = (x[i] < 0) ? 0 : ((x[i] > M - 1) ? (M - 1) : x[i]);
		(*f)[x[i]]++;
	}
}
