/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:54:25 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 23:16:51 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		++i;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "abcdefgh";
	char *s2 = "abcdwxyz";
	printf("Original: %d\n", strncmp(s1, s2, 4));
	printf("Mio: %d", ft_strncmp(s1, s2, 4));
}*/