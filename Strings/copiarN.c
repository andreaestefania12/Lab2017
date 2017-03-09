#include <stdio.h>
#include <stdlib.h>


void copiarN ( char* cadOrigen, char* cadDestino, int n); 

int main(int argc, char *argv[])
{
	char *cadenaEntrada = argv[1];
	char *cadenaN = argv[2];
	int n = atoi(cadenaN);
	char *cadenaSalida =(char*) malloc (n+1);
	copiarN(cadenaEntrada, cadenaSalida, n);
	printf("%s\n", cadenaSalida );
	return 0;
}

void copiarN ( char* cadOrigen, char* cadDestino, int n )
{
	int i;

	for (i = 0; i < n; i++)
	{
		cadDestino[i] = cadOrigen[i];
	}
}
