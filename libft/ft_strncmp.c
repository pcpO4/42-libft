/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:54:25 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 21:28:03 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		++i;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	printf("Original: %d\n", strncmp(s1, s2, 8));
	printf("Mio: %d", ft_strncmp(s1, s2, 8));
}