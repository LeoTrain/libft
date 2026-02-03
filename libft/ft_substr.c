/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:06:45 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 06:21:39 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * ft_substr extrait une sous-string de s.
 * Commence a l'index start et copie au maximum len caracteres.
 * Retourne une string vide si start depasse la longueur de s.
 * s       : La string source.
 * start   : Index de depart.
 * len     : Longueur maximale a extraire.
 * retourne: La sous-string allouee, ou NULL si l'allocation echoue.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
