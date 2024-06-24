/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:03:28 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/23 12:00:51 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*puntero;

	i = 0;
	ch = c;
	puntero = (unsigned char *)s;
	while (i < n)
	{
		if (puntero[i] == ch)
			return (puntero + i);
		++i;
	}
	return (NULL);
}
