/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:27:59 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:30:34 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstmap cree une nouvelle liste en appliquant f a chaque contenu.
 * Alloue un nouveau noeud pour chaque resultat de f.
 * En cas d'echec, libere tout avec del et retourne NULL.
 * lst : La liste source.
 * f   : La fonction de transformation.
 * del : La fonction pour liberer en cas d'erreur.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*current;
	void	*new_content;

	new_list = NULL;
	current = lst;
	while (current)
	{
		new_content = f(current->content);
		new_element = ft_lstnew(new_content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		current = current->next;
	}
	return (new_list);
}
