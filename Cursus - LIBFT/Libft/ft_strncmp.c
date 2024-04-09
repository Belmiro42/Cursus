/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:32:32 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/03/20 17:13:32 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index] && s1[index] && index < n - 1)
	{
		index ++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

/*
int main()
{
	char c;
	char s1[]= "aaaaaa";
	char s2[]= "aaaa";
	c = strncmp(s1, s2, 2) + '0';
	write(1, &c, 1);	
}
*/
