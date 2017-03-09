#include <stdio.h>
#include <stdlib.h>


int longCadena ( char* cad); 

int main(int argc, char *argv[])
{
	char *cadenaEntrada = argv[1];

	int n =longCadena(cadenaEntrada);
	printf("%d\n", n );
	return 0;
}

int longCadena ( char* cad)
{
	int n = 0;
	while (cad[n] != '\0')
	{
		n++;
	}

	return n;
}
