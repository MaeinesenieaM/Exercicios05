#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	int codigo; //codigo dos pratos.
	int caloria = 0; 

	setlocale (LC_ALL, "Portuguese");

	printf ("###-Refeição-####\n");
	
	printf ("\n-Escolha um Prato-\n\n 1 - Vegetariano\n 2 - Peixe\n 3 - Frango\n 4 - Carne\n\n"); 
	printf (" #: "); scanf ("%d", &codigo);

	switch (codigo)
	{
		case 1:
			caloria = caloria + 180;
			break;
		case 2:
			caloria = caloria + 230;
			break;
		case 3:
			caloria = caloria + 250;
			break;
		case 4:
			caloria = caloria + 350;
			break;
		default:
			printf (" Codigo irreconhecível :(\n Tente novamente.");
			exit (0);
	}

	printf ("\n-Escolha um Sobremesa-\n\n 1 - Abacaxi\n 2 - Sorvete Diet\n 3 - Mouse Diet\n 4 - Mouse Chocolate\n\n"); 
	printf (" #: "); scanf ("%d", &codigo);

	switch (codigo)
	{
		case 1:
			caloria = caloria + 75;
			break;
		case 2:
			caloria = caloria + 110;
			break;
		case 3:
			caloria = caloria + 170;
			break;
		case 4:
			caloria = caloria + 200;
			break;
		default:
			printf (" Codigo irreconhecível :(\n Tente novamente.");
			exit (0);
	}

	printf ("\n-Escolha um Sobremesa-\n\n 1 - Chá\n 2 - Suco de Laranja\n 3 - Suco de Melão\n 4 - Refrigerante Diet\n\n"); 
	printf (" #: "); scanf ("%d", &codigo);

	switch (codigo)
	{
		case 1:
			caloria = caloria + 20;
			break;
		case 2:
			caloria = caloria + 70;
			break;
		case 3:
			caloria = caloria + 100;
			break;
		case 4:
			caloria = caloria + 65;
			break;
		default:
			printf (" Codigo irreconhecível :(\n Tente novamente.");
			exit (0);
	}

	printf ("\n Sera consumido o total de %d em calorias.", caloria);

	printf ("\n\n    __o  bici! \n  _/><_ \n (_)/(_) \n  "); //BICI!!!
	return 0;
}