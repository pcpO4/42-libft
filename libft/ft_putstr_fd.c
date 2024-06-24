/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:04:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/16 21:04:53 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (s && fd != -1)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			++i;
		}
	}
}

/*#include <stdio.h>

int main()
{
	ft_putstr_fd("hola", 1);
}*/