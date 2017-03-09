#include <stdio.h>
#define numMagico 56

void main()
{
	int num;
	int contador = 0;
	int arreglo[100];
	int i = 0;

	printf("Escribir un numero del 1 a 100\n");
	scanf("%d", &num);

	while (num != numMagico)
	{
		if (num < numMagico)
		{
			printf("El numero magico es mayor\n");
		}

		else
		{
			printf("El numero magico es menor\n");
		}

		arreglo[contador]= num;
		printf("Escribir un numero del 1 a 100\n");
		scanf("%d", &num);
		contador++;
	}

	printf("GANASTEEEE!!!!!!, Adivinaste el numero en el intento %d \n",contador +1);
	printf("Los numeros que ingresaste fueron: \n");

	for(; i < contador; i++)
	{
		printf("%d\n", arreglo[i]);
	}
}