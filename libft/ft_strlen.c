/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:29:46 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 14:32:46 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlen calcule la longueur d'une string.
 * Parcourt la string jusqu'au '\0' et retourne le nombre de caracteres.
 * s       : La string a mesurer.
 * retourne: Le nombre de caracteres (sans le '\0').
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
