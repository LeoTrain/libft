/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:37:15 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 06:29:07 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strjoin concatene s1 et s2 dans une nouvelle string.
 * Alloue la memoire pour les deux strings + '\0'.
 * s1      : Premiere string.
 * s2      : Deuxieme string.
 * retourne: La string concatenee, ou NULL si l'allocation echoue.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	size_t	size;

	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	joined = ft_calloc(size, sizeof(char));
	if (!joined)
		return (NULL);
	ft_strlcat(joined, s1, size);
	ft_strlcat(joined + ft_strlen(s1), s2, size);
	return (joined);
}
