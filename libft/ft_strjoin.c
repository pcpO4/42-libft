/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:25:39 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 12:07:54 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		++i;
	}
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		str[i] = s2[i - ft_strlen(s1)];
		++i;
	}
	str[i] = '\0';
	return (str);
}
