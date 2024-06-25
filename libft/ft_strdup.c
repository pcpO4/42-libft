/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:18:22 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 23:10:15 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*str;

	size = ft_strlen(s) + 1;
	i = 0;
	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < size - 1)
	{
		str[i] = s[i];
		++i;
	}
	str[size - 1] = '\0';
	return (str);
}
/*#include <stdio.h>
int main()
{
	char *s = "";
	printf("%s", ft_strdup(s));
}*/