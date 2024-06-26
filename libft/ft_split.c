/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:29:21 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/26 17:45:26 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	cnt;
	int		inword;
	size_t	i;

	cnt = 0;
	i = 0;
	inword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && inword == 0)
		{
			cnt++;
			inword = 1;
		}
		else if (s[i] == c)
			inword = 0;
		++i;
	}
	return (cnt);
}

static char	*copiar(const char *s, int j, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[j + i] != '\0' && s[j + i] != c)
		++i;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[j + i] != '\0' && s[j + i] != c)
	{
		str[i] = s[j + i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

static void	*ft_free(char **matriz, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		free(matriz[i]);
		i++;
	}
	free(matriz);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		i;
	int		j;

	matriz = (char **)malloc((count_words(s, c) + 1) * sizeof(*matriz));
	if (!matriz)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			matriz[i] = copiar(s, j, c);
			if (!matriz[i])
				return (ft_free(matriz, i));
			++i;
			while (s[j] != '\0' && s[j] != c)
				++j;
		}
		else
			++j;
	}
	matriz[i] = NULL;
	return (matriz);
}
/*
#include <stdio.h>
int main()
{
	const char *s = "xxxxxxxxhello!";
	char **matriz = ft_split(s, 'x');
	for (int i = 0; matriz[i] != NULL; ++i)
	{
		printf("%s\n", matriz[i]);
		free(matriz[i]);
	}
	free(matriz);
}*/
