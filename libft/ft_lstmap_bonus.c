/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:20:52 by pcervant          #+#    #+#             */
/*   Updated: 2024/06/26 18:00:05 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodo;
	t_list	*lista;
	void	*content;

	if (!f || !del)
		return (NULL);
	lista = NULL;
	while (lst)
	{
		content = (*f)(lst -> content);
		nodo = ft_lstnew(content);
		if (!nodo)
		{
			(*del)(content);
			ft_lstclear(&lista, del);
			free(lista);
			return (NULL);
		}
		ft_lstadd_back(&lista, nodo);
		lst = lst->next;
	}
	return (lista);
}
