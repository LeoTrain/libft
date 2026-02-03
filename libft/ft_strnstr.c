/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 08:35:39 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 22:05:18 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strnstr cherche la sous-string little dans big.
 * Recherche limitee aux len premiers octets de big.
 * big     : La string dans laquelle chercher.
 * little  : La sous-string a trouver.
 * len     : Nombre maximum de caracteres a parcourir.
 * retourne: Pointeur vers le debut de la sous-string, ou NULL.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_j;

	if (!*little)
		return ((char *)big);
	big_i = 0;
	while (big[big_i] && big_i < len)
	{
		little_j = 0;
		while (big[big_i + little_j] == little[little_j] && (big_i + little_j) < len)
		{
			if (!little[little_j + 1])
				return ((char *)&big[big_i]);
			little_j++;
		}
		big_i++;
	}
	return (NULL);
}
