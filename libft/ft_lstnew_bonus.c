/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:31:18 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:32:16 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstnew cree un nouveau noeud de liste chainee.
 * content : Le contenu a stocker dans le noeud.
 * retourne: Le nouveau noeud, ou NULL si l'allocation echoue.
 */
t_list	*ft_lstnew(void	*content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
