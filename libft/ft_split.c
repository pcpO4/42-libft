/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:29:21 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 12:42:21 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	contar(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++cnt;
		while ((*s) && (*s != c))
			++s;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	i;
	size_t	cnt;

	matriz = (char **)malloc((contar(s, c) + 1) * sizeof(char *));
	if (!matriz || !s)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s)
		{
			if (!ft_strchr(s, c))
				cnt = ft_strlen(s);
			else
				cnt = (ft_strchr(s, c) - s);
			matriz[++i] = ft_substr(s, 0, cnt);
			s += cnt;
		}
	}
	matriz[i] = NULL;
	return (matriz);
}
