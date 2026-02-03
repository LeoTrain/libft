/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:19:37 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 20:09:02 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isdigit verifie si c est un chiffre (0-9).
 * c       : Le caractere a verifier.
 * retourne: 1 si c'est un chiffre, 0 sinon.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
