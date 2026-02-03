/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:39:38 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 20:40:27 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_toupper convertit une minuscule en majuscule.
 * Les autres caracteres restent inchanges.
 * c       : Le caractere a convertir.
 * retourne: La majuscule correspondante, ou c si pas une minuscule.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}
