/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:46:56 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 20:22:50 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*u;
	char	ch;

	i = ft_strlen(s);
	u = (char *)s;
	ch = c;
	if (ch == '\0')
		return (u + i);
	while (i >= 0)
	{
		if (u[i] == ch)
			return (u + i);
		--i;
	}
	return (NULL);
}
