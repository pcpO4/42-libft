/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:33:56 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 22:01:12 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n && &src[0] >= &dst[0])
	{
		dst1[i] = src1[i];
		i++;
	}
	i = n;
	while (i > 0 && &src[0] < &dst[0])
	{
		dst1[i - 1] = src1[i - 1];
		i--;
	}
	return (dst);
}
/*#include <stdio.h>
int main  ()
{
char src[] = "paco";
char dest[] = "vvvvvv aass ddd";
ft_memmove(dest, src, 4);
printf("%s", dest);
}*/