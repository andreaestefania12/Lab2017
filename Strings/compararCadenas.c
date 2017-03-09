#include <stdio.h> 

int compararCadenas (char *cad1, char *cad2);

int main (int argc, char *argv[])
{
	char *cad1 = argv[1];
	char *cad2 = argv[2];
	int comparar = compararCadenas(cad1, cad2);
	printf("%d\n", comparar );
	return 0;
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