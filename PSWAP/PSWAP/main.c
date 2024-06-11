/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:53:55 by utente            #+#    #+#             */
/*   Updated: 2024/06/10 17:18:40 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{ 
	t_stack_node	*a;
	t_stack_node	*b;

	//Initialise
	a = NULL;
	b = NULL;

	//If no arguments or empty second Argument FAIL
	if (1 == argc || (2 == argc && !argv[1][0]))
		return (1);

	//Split Argument
	else if (2 == argc)
		argv = ft_split(argv[1], ' ');

	//Makes Stack A
	stack_init(&a, argv + 1, 2 == argc);

	//If Stack A Isnt Sorted
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			tiny_sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
}
