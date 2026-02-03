/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:03:56 by leberton          #+#    #+#             */
/*   Updated: 2025/04/22 15:06:40 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_bzero met a zero les n premiers octets de s.
 * s       : Pointeur vers la zone memoire a initialiser.
 * n       : Nombre d'octets a mettre a zero.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			index;

	ptr = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		ptr[index] = 0;
		index++;
	}
}
