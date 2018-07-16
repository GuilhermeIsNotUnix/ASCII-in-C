//Tabela ASCII Completa
//Made by Guilherme Carvalho
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 255; i++)
	{
		printf("%d - %c\n", i, i);
	}

	return 0;
}