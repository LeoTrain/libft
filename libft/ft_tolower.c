/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:42:20 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 22:10:39 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_tolower convertit une majuscule en minuscule.
 * Les autres caracteres restent inchanges.
 * c       : Le caractere a convertir.
 * retourne: La minuscule correspondante, ou c si pas une majuscule.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
