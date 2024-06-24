/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:12:13 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/23 12:02:52 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b = str);
}

/*int		main()
{
	char b[] = "holabba";
	int c = 65;
	size_t len = 5;
	write(1, ft_memset(b, c, len), 5);
	printf("\n");
	write(1, memset(b, c, len), 5);
}*/
