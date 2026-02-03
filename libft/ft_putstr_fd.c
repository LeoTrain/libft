/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:44:54 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:45:21 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putstr_fd ecrit une string sur le file descriptor donne.
 * s  : La string a ecrire.
 * fd : Le file descriptor (1 = stdout, 2 = stderr, etc.).
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
