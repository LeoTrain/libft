/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:33:11 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:33:49 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstsize compte le nombre de noeuds dans la liste.
 * lst     : Le premier noeud de la liste.
 * retourne: Le nombre de noeuds.
 */
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
