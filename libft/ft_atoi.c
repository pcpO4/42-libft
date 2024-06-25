/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:50:28 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 10:59:18 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signo;
	int	i;
	int	valor;

	signo = 1;
	i = 0;
	valor = 0;
	while (('\t' <= nptr[i] && nptr[i] <= '\r') || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
	{
		++i;
		signo = -1;
	}
	if (nptr[i] == '+' && signo == 1)
		++i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		valor = valor * 10 + (nptr[i] - '0');
		++i;
	}
	return (valor * signo);
}
/*#include <stdio.h>
int main()
{
	char *n = "\t\v\f\r\n \f-06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf("Original: %d, Mio: %d", i1, i2);
}*/