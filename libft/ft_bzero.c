/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:08:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/23 12:35:56 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}

/*int		main()
{
	char b[] = "holabba";
	size_t len = 5;
	write(1, bzero(b, len), 5);
	printf("\n");
	write(1, ft_bzero(b, len), 5);
}*/