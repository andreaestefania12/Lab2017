#include <stdio.h>
#include <stdlib.h>    
#include <time.h> 

void numeroDobleMagico(int numMagico1, int numMagico2);

void main()
{
	int numMagico1 = rand()%100;
  	srand (time(NULL));
	int numMagico2 = rand()%100;
  	srand (time(NULL));
  	numeroDobleMagico(numMagico1, numMagico2);
}

void numeroDobleMagico( int numMagico1, int numMagico2)
{
	int num;
	int contador = 0;
	int arreglo[100];

	printf("Escribir un numero del 1 a 100\n");
	scanf("%d", &num);

	printf("%d\n", numMagico1);
	printf("%d\n", numMagico2);
	
	while (((num != numMagico1) && (num != numMagico2)) && (num <= 100))
	{
		if ((num == (numMagico1* numMagico2)) || (num == (numMagico1 + numMagico2)) || (num == (numMagico1 - numMagico2)) || (num == (numMagico1 + numMagico2)))
		{
			break;
		}

		else if ((num < numMagico2) && (num < numMagico1))
		{
			printf("El numero magico 1 y 2 son mayor \n");
		}

		else if ((numMagico1 < num) && (num < numMagico2))
		{
			printf("El numero esta entre el numero magico 1 y el numero magico 2 (mag1 < num < mag2) \n");
		}

		else if ((numMagico1 > num) && (num > numMagico2))
		{
			printf("El numero esta entre el numero magico 2 y el numero magico 1 (mag2 < num < mag1)\n");
		}

		else
		{
			printf("Los numeros magicos son menores\n");
		}

		arreglo[contador]= num;
		printf("Escribir un numero del 1 a 100\n");
		scanf("%d", &num);
		contador++;	
	}		

	if ((num <= 100) && (num>=0))
	{
		printf("GANASTEEEE!!!!!!, Adivinaste uno o los dos numeros en el intento %d \n",contador +1);
		printf("Los numeros que ingresaste fueron: \n");
		int i = 0;
		for(; i < contador; i++)
		{
			printf("%d\n", arreglo[i]);
		}
	}

	else 
	{
		printf("El numero que ingresaste es incorrecto, no esta en el rango del 1 al 100\n");
	}
}
