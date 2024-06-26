/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggalle <anggalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:13:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/26 13:13:22 by anggalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static int	count_words(long nb)
{
	int	cnt;

	cnt = 0;
	if (nb < 0)
	{
		nb = -nb;
		cnt ++;
	}
	if (nb == 0)
		cnt ++;
	while (nb != 0)
	{
		nb = nb / 10;
		++cnt;
	}
	return (cnt);
}

static char	*negativo(long nb)
{
	int		i;
	char	*str;
	int		tam;

	tam = count_words(nb);
	str = malloc((tam + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	nb = -nb;
	i = tam - 1;
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (i > 0)
	{
		str[i] = (nb % 10 + 48);
		nb = nb / 10;
		i--;
	}
	str[tam] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		tam;
	long	nb;

	nb = n;
	if (nb <= 0 || nb == -2147483648)
		return (negativo(nb));
	tam = count_words(nb);
	i = tam - 1;
	str = malloc((tam + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (nb != 0)
	{
		str[i] = (nb % 10 + 48);
		nb = nb / 10;
		i--;
	}
	str[tam] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main()
{
	int n = -123;
	char *str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
}
*/