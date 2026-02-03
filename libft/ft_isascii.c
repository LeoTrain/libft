/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:25:17 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 14:26:03 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isascii verifie si c est dans la table ASCII (0-127).
 * c       : Le caractere a verifier.
 * retourne: 1 si c'est un caractere ASCII, 0 sinon.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
