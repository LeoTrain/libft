/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:17:33 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 14:23:37 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isalpha verifie si c est une lettre (A-Z ou a-z).
 * c       : Le caractere a verifier.
 * retourne: 1 si c'est une lettre, 0 sinon.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
