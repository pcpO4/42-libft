/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:03:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 12:01:14 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int main()
{
	char *s = "lorem ipsum dolor";
	printf("%s", ft_substr(s, 0, 10));
}*/