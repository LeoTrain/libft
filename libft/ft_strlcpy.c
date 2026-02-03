/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:57:31 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:59:23 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcpy copie src dans dest avec une taille limite.
 * Copie au maximum dstsize - 1 caracteres et ajoute toujours '\0'.
 * dest    : La string destination.
 * src     : La string source a copier.
 * dstsize : Taille du buffer destination.
 * retourne: La longueur de src (ce qu'on aurait voulu copier).
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
