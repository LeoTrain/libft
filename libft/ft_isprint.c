/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:27:38 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 14:28:53 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isprint verifie si c est un caractere imprimable (32-126).
 * Inclut l'espace mais pas les caracteres de controle.
 * c       : Le caractere a verifier.
 * retourne: 1 si c'est imprimable, 0 sinon.
 */
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
