/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:13:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 23:21:11 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static int	tam(int n)
{
	int	valor;

	valor = 0;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		++valor;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		valor++;
	}
	return (valor);
}

static char	*negativo(long n)
{
	int		i;
	char	*str;
	size_t	len;

	str = (char *)malloc((tam(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	len = tam(n);
	n = -n;
	i = (len - 1);
	while ((n != 0))
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	nb = n;
	str = (char *)ft_calloc((tam(nb) + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
		return (negativo(nb));
	i = tam(nb) - 1;
	while (i >= 0)
	{
		str[i] = (nb % 10 + '0');
		nb = nb / 10;
		++i;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

int	main()
{
	char *str = ft_itoa(-1);
	printf("%s", str);
	free(str);
}*/