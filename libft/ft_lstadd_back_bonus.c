/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:19:14 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:21:45 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_back ajoute un noeud a la fin de la liste.
 * Parcourt la liste jusqu'au dernier noeud puis ajoute new_lst.
 * lst     : Pointeur vers le pointeur du premier element.
 * new_lst : Le noeud a ajouter a la fin.
 */
void	ft_lstadd_back(t_list **lst, t_list *new_lst)
{
	t_list	*last;

	if (!lst || !new_lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new_lst;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new_lst;
}
