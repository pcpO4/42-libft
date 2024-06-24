/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:20:51 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/23 11:34:29 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			litt;
	size_t			i;
	size_t			j;
	char			*puntero;

	litt = ft_strlen(little);
	puntero = (char *)big;
	if (litt == 0 || big == little)
		return (puntero);
	i = 0;
	while (puntero[i] != '\0' && i < len)
	{
		j = 0;
		while (puntero[i + j] != '\0' && little[j] != '\0'
			&& puntero[i + j] == little[j] && i + j < len)
			++j;
		if (j == litt)
			return (puntero + i);
		++i;
	}
	return (NULL);
}
