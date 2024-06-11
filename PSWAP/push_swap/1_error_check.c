#include "3_push_swap.h"

void error_check(int *argn, char ***argv)
{
	int indice1;
	int indice2;
	
	if (*argn == 1)
	{
		printf("dosmth");
	}

	indice1 = *argn - 1;
	while (indice1 >= 1)
	{
		indice2 = indice1-- - 1;
		ps_atoi((*argv)[indice1 + 1]);
		while (indice2 >= 1)
			if(ps_atoi((*argv)[indice1 + 1]) == ps_atoi((*argv)[indice2--]))
				my_exit("Recurring Value");
	}
}
