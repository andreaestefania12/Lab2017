#include <stdio.h> 
#include <stdlib.h>

// Solo es recursivo 
int longCadena ( char* cad)
{
	int n = 0;
	while (cad[n] != '\0')
	{
		n++;
	}

	return n;
}

void copiarCadenas (char *cadOrigen, char *cadDestino, int m); //m es el tamaño de la cadena de entrada

int main(int argc, char *argv[])
{
	char *cad1 = argv[1];
	int m = longCadena(cad1);
	char *cadenaSalida =(char*) malloc (m+1);
	copiarCadenas(cad1, cadenaSalida, m);
	printf("%s\n", cadOrigen);
	return 0;
}

void copiarCadenas (char *cadOrigen, char *cadDestino, int m)
{
	int i;

	for (i = 0; i <= m; i++)
	{
		cadDestino[i] = cadOrigen[i];
	}

	printf("%s\n", cadDestino );
}


