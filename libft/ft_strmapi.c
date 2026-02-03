/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:59:40 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 22:01:30 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strmapi applique une fonction a chaque caractere avec son index.
 * Cree une nouvelle string avec les resultats de f(index, caractere).
 * Retourne NULL si l'allocation echoue.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
