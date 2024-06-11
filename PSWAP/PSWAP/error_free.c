/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:57:22 by utente            #+#    #+#             */
/*   Updated: 2024/06/10 19:43:25 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//Free the Split Array
void	free_matrix(char **argv)
{
	int	i;

	i = -1;
	if (NULL == argv || NULL == *argv)
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv - 1);
}

//Free the Stack
void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (NULL == stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

//SCORCHED EARTH FREE EVERYTHING
void	error_free(t_stack_node **a, char **argv, bool flag_argc_2)
{
	free_stack(a);
	if (flag_argc_2)
		free_matrix(argv);
	//write(1, "Error\n", 6);
	exit(1);
}

//Check Input Syntax Is Correct
int	error_syntax(char *str_nbr)
{
	if (!(*str_nbr == '+'
			|| *str_nbr == '-'
			|| (*str_nbr >= '0' && *str_nbr <= '9')))
		return (1);
	if ((*str_nbr == '+'
			|| *str_nbr == '-')
		&& !(str_nbr[1] >= '0' && str_nbr[1] <= '9'))
		return (1);
	while (*++str_nbr)
	{
		if (!(*str_nbr >= '0' && *str_nbr <= '9'))
			return (1);
	}
	return (0);
}

//Checks if Two Arguments Same
int	error_repetition(t_stack_node *a, int nbr)
{
	if (NULL == a)
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}
