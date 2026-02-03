/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:26:03 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:26:47 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstiter applique une fonction a chaque contenu de la liste.
 * Parcourt la liste et appelle f sur chaque contenu.
 * lst : Le premier noeud de la liste.
 * f   : La fonction a appliquer sur chaque contenu.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
