#include <stdio.h>
#include "compilalinb.h"

int main()
{
	FILE *f = fopen("cod.linb", "r");

	funcp funcao = CompilaLinB(f);
	int i = (*funcao)(7);

	printf("\nA resposta eh %d\n", i);

	return 0;
}
