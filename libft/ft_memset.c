/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:40:59 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 07:03:35 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memset remplit les n premiers octets de s avec l'octet c.
 * s       : Pointeur vers la zone memoire a remplir.
 * c       : Valeur a ecrire (convertie en unsigned char).
 * n       : Nombre d'octets a remplir.
 * retourne: Le pointeur s original.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
