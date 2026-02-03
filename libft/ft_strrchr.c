/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:22:10 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 22:06:31 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strrchr cherche la derniere occurrence de c dans la string.
 * Parcourt toute la string et memorise la derniere position trouvee.
 * s       : La string a parcourir.
 * c       : Le caractere a chercher.
 * retourne: Pointeur vers la derniere occurrence, ou NULL si absent.
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return ((char *)last_occurrence);
}
