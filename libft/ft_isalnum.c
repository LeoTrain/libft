/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:05 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 14:24:54 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_isalnum verifie si c est alphanumerique (lettre ou chiffre).
 * Combine ft_isalpha et ft_isdigit.
 * c       : Le caractere a verifier.
 * retourne: 1 si c'est alphanumerique, 0 sinon.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
