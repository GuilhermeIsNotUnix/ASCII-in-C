//Tabela ASCII Completa
//Made by Guilherme Carvalho
#include <stdio.h>

int main(void)
{
	int i;
	
	printf("|Inteiro|Caractere|Hexadecimal|Octadecimal\n");
	for (i = 0; i <= 255; i++)
	{
		printf("|%d|%c|%x|%o|\n", i, i, i, i);
	}

	return 0;
}
