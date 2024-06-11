/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:44:03 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/04/13 00:01:24 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*copydest;
	char	*copysrc;

	copysrc = src;
	copydest = dest;
	while (*copydest)
	{
		copydest++;
	}
	while (*copysrc && nb >= 1)
	{
		*copydest = *copysrc;
		copysrc++;
		copydest++;
		nb--;
	}
	return (dest);
}

/*

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[20] = "Hello, ";
    char *str2 = "world!";

    ft_strncat(str1, str2, 2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

*/
