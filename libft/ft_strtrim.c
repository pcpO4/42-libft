/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:41:06 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/24 21:48:48 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

/*strchr comprueba que el caracter se encuentre dentro del array
strdup crea una copia de s1 y la retorna, ya que no se puede modificar
s1 como tal porque es constante*/
/*#include <stdio.h>
int main()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
    char *ret = ft_strtrim(s1, " \n\t");
	printf("%s", ret);
	free(ret);
}*/
