#include "3_push_swap.h"

int	ps_atoi(const char *str)
{
	long	number;
	short	sign;

	number = 0;
	sign = 1;
	if (!(48 <= *str && *str <= 57))
		my_exit("Contains Non-Numerical Characters");
	while ((48 <= *str && *str <= 57))
		number = number * 10 + (*str++ - '0');
	if (!(48 <= *str && *str <= 57) && (*str != '\0'))
		my_exit("Contains Non-Numerical Characters");
	printf("%d\n", (int)number);
	return (number * sign);
}

//CHANGE ME TO INCLUDE NEGATIVES
