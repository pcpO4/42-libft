/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:29:21 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 20:17:27 by pcervant         ###   ########.fr       */
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
		if (s[j] != c)
		{
			matriz[i] = copiar(s, j, c);
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
/*#include <stdio.h>
int main()
{
	const char *s = "split  ||this|for|me|||||!|";
	char **matriz = ft_split(s, '|');
	for (int i = 0; matriz[i] != NULL; ++i)
	{
		printf("%s\n", matriz[i]);
		free(matriz[i]);
	}
	free(matriz);
}*/