/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:04:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/23 11:58:53 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	total;

	total = (nmemb * size);
	if (total == 0)
		return (NULL);
	s = malloc(total);
	if (s != NULL)
	{
		ft_memset(s, 0, total);
		return (s);
	}
	return (NULL);
}
