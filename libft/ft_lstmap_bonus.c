/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:20:52 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/25 13:31:41 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*lst2;

	lst2 = malloc(sizeof(t_list));
	while (aux -> next)
	{
		aux = aux -> next;
		lst2 = f(lst -> content);
		if (!lst2)
		{
			ft_lstclear(&lst2, del);
			lst2 = NULL;
		}
		lst = aux;
	}
	return (lst2);
}
