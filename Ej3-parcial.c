#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**Realizar un programa que recibe una frase por linea de comandos:
ordernar_frase EstoEsUnaFraseLargaSinEspacios

Y ordene las letras de la frase de menor a mayor obteniendo un resultado como el siguiente:

EEEFLSUaaaaacegiinnooprrssssst

Nótese que las mayúsculas aparecen antes que las minúsculas ya que en la tabla ASCII
tienen un valor menor.
*/
int main(int argc, char *argv[], char *envp[]){
int i=0;

char*cadena;

cadena=(char*)malloc(sizeof(envp[1]));
strcpy(cadena, envp[1]);
char temp;
	while(*(cadena+i)!= '\0'){

		if(*(cadena+i)>*(cadena+i+1)){
			temp=*(cadena+i);
			*(cadena+i)=*(cadena+i+1);
			*(cadena+i+1)=*(cadena+i);

		}
	i++;
	}
printf("Cadena ordenada: %s ",cadena);

return 0;


}
