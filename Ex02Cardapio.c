#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int codigo; //codigo do cardapio.
	int quantidade;
	float valor [] = {10.10, 8.30, 8.50, 12.50, 13.25}; //
	float pagar; 

	setlocale (LC_ALL, "Portuguese");

	printf ("-------Cardápio-------\n");
	
	printf (" 100 - Cachorro quente\n 101 - Bauru simple\n 102 - Bauru com ovo\n 103 - Hamburger\n 104 - Cheeseburger\n\n"); 
	printf (" Insira a comida desejada: "); scanf ("%d", &codigo);
	printf (" Agora digite a quantidade: "); scanf ("%d", &quantidade);

	switch (codigo)
	{
		case 100:
			pagar = valor [0] * quantidade;
			break;
		case 101:
			pagar = valor [1] * quantidade;
			break;
		case 102:
			pagar = valor [2] * quantidade;
			break;
		case 103:
			pagar = valor [3] * quantidade;
			break;
		case 104:
			pagar = valor [4] * quantidade;
			break;
		default:
			printf (" Codigo irreconhecível, tente denovo.\n");
			exit (0);
	}

	printf ("\n O Total a pagar sera: R$%.2f", pagar);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}