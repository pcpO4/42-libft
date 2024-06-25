/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:25:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 23:24:25 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	tam1;
	size_t	tam2;

	tam1 = ft_strlen(s1);
	tam2 = ft_strlen(s2);
	str = malloc((tam1 + tam2 + 1) * sizeof(char));
	i = 0;
	while (i < tam1)
	{
		str[i] = s1[i];
		++i;
	}
	while (i < (tam1 + tam2))
	{
		str[i] = s2[i - tam1];
		++i;
	}
	str[i] = '\0';
	return (str);
}
