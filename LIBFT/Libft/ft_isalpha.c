/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:04:09 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/03/20 18:03:41 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(unsigned short c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
	if(ft_isalpha('4'))
	{
		write(1, "FUCKYEAH", 8);
	}
}
*/