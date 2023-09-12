#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int DDD; //DDD da cidade

	setlocale (LC_ALL, "Portuguese");

	printf ("----Rastreador----\n");
	
	printf (" Insire o DDD da cidade: "); scanf ("%d", &DDD);

	switch (DDD)
	{
		case 11:
			printf (" .\n O DDD [11] pertence a São Paulo.\n");
			break;
		case 19:
			printf (" .\n O DDD [19] pertence a Campinas.\n");
			break;
		case 21:
			printf (" .\n O DDD [21] pertence a Rio de Janeiro.\n");
			break;
		case 27:
			printf (" .\n O DDD [27] pertence a Vitória.\n");
			break;
		case 31:
			printf (" .\n O DDD [31] pertence a Belo Horizonte.\n");
			break;
		case 32:
			printf (" .\n O DDD [32] pertence a Juiz de Fora.\n");
			break;
		case 61:
			printf (" .\n O DDD [61] pertence a Brasília.\n");
			break;
		case 71:
			printf (" .\n O DDD [71] pertence a Salvador.\n");
			break;
		default:
			printf (" Não foi encontrada um DDD com este valor.\n");
			exit (0);
	}

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}