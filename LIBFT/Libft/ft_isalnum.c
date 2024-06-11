/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:13:35 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/03/16 17:31:49 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(unsigned char c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || (48 <= c && c <= 57))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
	if(ft_isalnum('.'))
	{
		write(1, "FUCKYEAH", 8);
	}
}
*/