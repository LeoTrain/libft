/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:23:11 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:24:24 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstclear supprime tous les noeuds de la liste.
 * Libere le contenu de chaque noeud avec del, puis free le noeud.
 * Met le pointeur de liste a NULL a la fin.
 * lst : Pointeur vers le pointeur du premier element.
 * del : La fonction pour liberer le contenu.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
