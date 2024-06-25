/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:29:21 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 18:46:01 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	cnt;
	size_t	cntc;
	size_t	i;

	cnt = 0;
	i = 0;
	cntc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++cntc;
		if (cntc == 2)
		{
			cnt++;
			cntc = 0;
		}
		++i;
	}
	return (cnt);
}

static void	copiar(char const *s, int j, char *matriz, char c)
{
	size_t	i;

	i = 0;
	while (s[j + i] != c)
	{
		matriz[i] = s[j];
		++i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	i;
	size_t	j;
	
	matriz = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!matriz)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			copiar(s, j, matriz[i], c);
			++i;
		}
		++j;
	}
	matriz[i] = NULL;
	return (matriz);
}

