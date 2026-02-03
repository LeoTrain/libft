/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:12:09 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 06:29:34 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strdup duplique une string avec malloc.
 * Alloue la memoire necessaire et copie tous les caracteres.
 * s       : La string a dupliquer.
 * retourne: La copie allouee, ou NULL si l'allocation echoue.
 */
char	*ft_strdup(const char *s)
{
	size_t		i;
	char		*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(s)+1);
	if (dup == NULL)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
