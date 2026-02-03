/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 07:08:34 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:52:47 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr cherche la premiere occurrence de c dans la string.
 * Si c == '\0', retourne un pointeur vers le terminateur de la string.
 * s       : La string a parcourir.
 * c       : Le caractere a chercher.
 * retourne: Pointeur vers le caractere trouve, ou NULL si absent.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}
