/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:24:46 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:25:32 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstdelone supprime un noeud en liberant son contenu et le noeud.
 * Ne modifie pas les liens de la liste (next).
 * lst : Le noeud a supprimer.
 * del : La fonction pour liberer le contenu.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
