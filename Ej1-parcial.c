#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ObtenerMayor(int *datos, int largo);
void Estadistica(int *datos, int largo, float *promedio, float *desvio);
/** Falto poner los prototipos de algunas funciones**/
void vector_redimensionar(int *vec, int  nuevotam, int datonuevo);
float promedio(int *vec, int tam );

int main(){
	int dato, i=0, mayor=0, n=0;

	int *numeros=(*int)malloc(sizeof(int));
	float promedio=0, desvio=0;
	numeros=realloc(numeros,sizeof(int*) );

	printf("------------Ingreso de datos---------------");
	printf("Ingrese un numero, para finalizar ingrese el 0");
	scanf("%d", &n);

	while(n!=0){
		i++;
		scanf("%d",&dato);
		vector_redimensionar(numeros, i+1, dato);
		mayor=ObtenerMayor( numeros, i+1);
		printf("EL mayor valor es : %d ", mayor);

		/**Es un bucle que no termina ya que no pasa nada dentro**/
		printf("Ingrese un numero, para finalizar ingrese el 0");
		scanf("%d", &n);

}
free(numeros);
return 0;
}
void vector_redimensionar(int *vec, int  nuevotam, int datonuevo){
	void ** datos_nuevos = realloc(vec,nuevotam*sizeof(void*) );
	free(vec);
	vec=*datos_nuevos;
	*(vec+(nuevotam-1))=datonuevo;

}
float promedio(int *vec, int tam ){
	float prom=0;
	int i;
	for(i=0;i<tam;i++){
		prom=+(*(vec+i));
	}
	prom=prom/tam;

return prom;
}
float desvio(int *vec, int tam, float *prom){
	float desvio=0;
	int i=0;
	for(i=0; i<tam; i++){
		/***Error de codigo ,2 no va**/
		desvio+=(*(vec+i)-*prom);
	}
	desvio=desvio/tam;
	return desvio;
}
int ObtenerMayor(int *datos, int largo){
	/**Error en el nombre de la variable datos , no se llama vec**/
	int i, mayor=0;
	for(i=0;i<largo;i++){
		if((*(datos+i))>mayor){
			mayor=(*(datos+i));
		}
	}
return mayor;
}
void Estadistica(int *datos, int largo, float *prom, float *desv){
	/**Se repiten los nombres y hay un error de compatiblidad con las variables y las funciones*/
	*prom=promedio(datos, largo);
	printf("\n El promedio es : %f ",*prom);
	*desv=desvio(datos, largo, prom);
	printf("\n El desvio  es : %f ",*desvio);

}

