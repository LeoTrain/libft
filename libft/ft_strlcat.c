/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:19:24 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:57:06 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat concatene src a la fin de dst avec une taille limite.
 * Ajoute au maximum size - strlen(dst) - 1 caracteres et termine par '\0'.
 * dst     : La string destination.
 * src     : La string source a ajouter.
 * size    : Taille totale du buffer destination.
 * retourne: La longueur totale qu'on aurait voulu creer.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
