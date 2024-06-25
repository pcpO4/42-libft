/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:03:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 23:18:54 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	if (start > i || len == 0)
		return (ft_strdup(""));
	if (i - start >= len)
		str = ft_calloc((len + 1), sizeof(char));
	else
		str = ft_calloc((i - start + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}
/*#include <stdio.h>
int main()
{
	size_t n = 1844674407370955161;
	printf("%s", ft_substr("hola", 0, n));
}*/