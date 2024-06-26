/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:13:53 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/26 12:13:32 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static int	count_words(long int nb)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 1;
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb = nb / 10;
		++cnt;
	}
	return (cnt);
}

static char	*negativo(long int nb)
{
	int		i;
	char	*str;
	int		tam;

	tam = count_words(nb);
	str = malloc((tam + 2) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	nb = -nb;
	i = tam - 1;
	while(i > 0)
	{
		str[i] = (nb % 10 + 48);
		nb = nb / 10;
		i--;
	}
	str[tam + 1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	if (nb < 0 || nb == -2147483648)
		return (negativo(nb));
	i = count_words(n) - 1;
	str = malloc((count_words(nb) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nb == 0) 
	{
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
	while(nb > 0)
	{
		str[i] = (nb%10 + '0');
		nb = nb/10;
		i--;
	}
	str[count_words(nb)] = '\0';
	return (str);
}

#include <stdio.h>

int	main()
{
	int n = -234;
	char *str = ft_itoa(n);
	printf("%s", str);
	free(str);
}