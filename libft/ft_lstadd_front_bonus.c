/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:22:03 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:22:45 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_front ajoute un noeud au debut de la liste.
 * lst     : Pointeur vers le pointeur du premier element.
 * new_lst : Le noeud a ajouter en tete.
 */
void	ft_lstadd_front(t_list **lst, t_list *new_lst)
{
	if (lst && new_lst)
	{
		new_lst->next = *lst;
		*lst = new_lst;
	}
}
