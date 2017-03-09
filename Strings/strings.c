#include <stdio.h>
#include <stdlib.h>

int longCadena ( char* cad); 

void copiarCadenas (char *cadOrigen, char *cadDestino);

char *copiarN (char *cadOrigen, char *cadDestino, int n);

char *copiarSub (char *cadOrigen, char *cadDestino, int n, int m);

int compararCadenas (char *cad1, char *cad2);

char * concatenarCadenas (char *cad1, char *cad2);

char *asignarCadena (char *cad, char car);

char* haciaMayusculas (char *cadOrigen); 	

int existecar (char *cad, char car);

int posInicar (char *cad, char car);

int posFincar (char *cad, char car);

int main ()
{
	printf("1. longCadena \n");
	printf("2. copiarCadenas \n");	    
	printf("3. copiarN \n");	    
	printf("4. copiarSub \n");
	printf("5. compararCadenas \n");
	printf("6. concatenarCadenas\n");
	printf("7. asignarCadena\n");
	printf("8. haciaMayusculas\n");
	printf("9. existecar\n");
	printf("10. posInicar\n");
	printf("11. posFincar\n\n");
	printf("Elegir una opcion: \n");

	int opcion;
	scanf("%d", &opcion);
	char cadeIngresada[100];
	printf("Escribir la cadena \n" );
	scanf ( "%s", cadeIngresada);
	char *cad =(char*) malloc (sizeof(char));
	cad = cadeIngresada;

	if (opcion == 1)
	{		
		int l = longCadena (cad);
		printf("La longitud de la cadena es %d\n", l );
	}

	else if (opcion == 2)
	{
		int l = longCadena (cadeIngresada);
		char *cadDestino = (char *) malloc (l + 1);
		copiarCadenas (cad , cadDestino);	
	}

	else if (opcion == 3)
	{
		int w ;
		printf("Escribir hasta que posicion \n");
		scanf("%d", &w);
		char *cadDestino = (char *) malloc (w + 1);
		char *cadCopiada = (char *) malloc (w + 1);
		cadCopiada = copiarN (cad , cadDestino, w);
		printf("%s\n", cadCopiada );
	}

	else if (opcion == 4)
	{
		int m,n ;
		printf("Escribir desde que posicion \n");
		scanf("%d", &n);
		printf("Escribir  hasta que posicion \n");
		scanf("%d", &m);
		char *cadDestino = (char *) malloc ((m-n) + 1);
		char *cadCopiada = (char *) malloc ((m-n) + 1);
		cadCopiada = copiarSub (cad , cadDestino, n,m);
		printf("%s\n", cadCopiada );
	}

	else if (opcion == 5)
	{
		char cadeIngresada2[100];
		printf("Escribir la segunda cadena \n" );
		scanf ( "%s", cadeIngresada2);
		int l = longCadena(cadeIngresada2);
		int resultado = compararCadenas(cad,cadeIngresada2);
		printf("%d\n", resultado );
	}

	else if (opcion == 6)
	{
		char cadeIngresada2[100];
		printf("Escribir la segunda cadena \n" );
		scanf ( "%s", cadeIngresada2);
		int l = longCadena(cadeIngresada2);
		char *cad2 =(char*) malloc (l +1);
		cad2 = concatenarCadenas(cad, cadeIngresada2);
		printf("%s\n", cad2 );
	}

	else if (opcion == 7)
	{
		char caracter;
		printf("Escribir el caracter \n" );
		scanf ( "%s", &caracter);
		int l = longCadena(cad);
		char *cad2 =(char*) malloc (l +1);
		cad2 = asignarCadena(cad, caracter);
		printf("%s\n", cad2 );	
	}

	else if (opcion == 8)
	{
		int l = longCadena(cad);
		char *cad2 =(char*) malloc (l +1);
		cad2 = haciaMayusculas(cad);
		printf("%s\n", cad2 );
	}

	else if (opcion == 9)
	{
		char caracter;
		printf("Escribir el caracter \n" );
		scanf ( "%s", &caracter);		
		int existe = existecar(cad, caracter);
		printf("%d\n", existe);
	}

	else if (opcion == 10)
	{
		char caracter;
		printf("Escribir el caracter \n" );
		scanf ( "%s", &caracter);		
		int posini = posInicar(cad, caracter);
		printf("%d\n", posini);
	}

	else if (opcion == 11)
	{
		char caracter;
		printf("Escribir el caracter \n" );
		scanf ( "%s", &caracter);		
		int posfi = posFincar(cad, caracter);
		printf("%d\n", posfi );
	}

	else
	{
		printf("La opcion es incorrecta\n");
	} 

}

int longCadena ( char* cad)
{
	int i = 0;

	while ( cad[i] != '\0')
	{
		i++;
	}

	return i;
}

void copiarCadenas (char *cadOrigen, char *cadDestino)
{
	int m = longCadena(cadOrigen);
	int i;

	for (i = 0; i <= m; i++)
	{
		cadDestino[i] = cadOrigen[i];
	}

	printf("%s\n", cadDestino );
}

char *copiarN (char *cadOrigen, char *cadDestino, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		cadDestino[i] = cadOrigen[i];
	}

	return cadDestino;
}

char *copiarSub (char *cadOrigen, char *cadDestino, int n, int m)
{
	int i, j=0;

	for (i = n; i <= m; i++)
	{
		cadDestino[j] = cadOrigen[i];
		j++;
	}

	return cadDestino;
}

int compararCadenas (char *cad1, char *cad2)
{
	int i = 0;
	while ((cad1[i] != '\0') || (cad2[i] != '\0' ))
	{
		if (cad1[i] == cad2[i])
		{
			i++;
		}

		else if (cad1[i] < cad2[i])
		{
			return -1;
		}

		else
		{
			return 1;
		}
	}
	return 0;
}

char * concatenarCadenas (char *cad1, char *cad2)
{
	int l = longCadena (cad1);
	int m = longCadena (cad2);
	char *cadDestino = (char *) malloc (m+l+ 1); 
	int i, j;

	for (i = 0; i < l; i++)
	{
		cadDestino[i] = cad1[i];		
	}

	for (j = 0; j <= m; j++)
	{
		cadDestino[i] = cad1[j];
		i++;		
	}

	return cadDestino;

}

char *asignarCadena (char *cad, char car)
{
	int i, j;
	int l = longCadena (cad);
	char *cadDestino = (char *) malloc (l+ 1); 

	for (i = 0; i < l; i++)
	{
		cadDestino[i] = cad[i];		
	}
	for (j = 0; j < l; j++)
	{
		cadDestino[i] = car;		
	}

	return cadDestino;

}

char* haciaMayusculas (char *cadOrigen)
{
	int n = longCadena(cadOrigen);
	char* cadDestino = (char *) malloc (n+1);
	cadDestino = cadOrigen;
	char c, nc;  // c = car nc = nuevo car
	int i;

	for (i = 0 ; i < n; i++)
	{
		c = cadOrigen[i];
		nc = c - 32;
		cadDestino[i] = nc;
	}

	return cadDestino;
}

int existecar (char *cad, char car)
{
	int n = longCadena(cad);
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (cad[i] == car)
		{
			return 1;
		}
	}

	return 0;
}

int posInicar (char *cad, char car)
{
	int n = longCadena(cad);
	int i;

	for (i = 0 ; i < n; i++)
	{
		if (cad[i] == car)
		{
			return i;
		}
	}

	return -1;
}

int posFincar (char *cad, char car)
{
	int n = longCadena(cad);
	int i, j;

	for (i = n ; i >= 0; i--)
	{
		if (cad[i] == car)
		{
			return i;
		}
	}

	return -1;
}