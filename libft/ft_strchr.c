/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:40:12 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 23:10:31 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	if (ch == '\0')
	{
		i = ft_strlen(s);
		return ((char *)s + i++);
	}
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	int c = 0;
	char *str = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *ch;
	printf("%s", ft_strchr(str, c));
}*/