/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:41:39 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:42:14 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putendl_fd ecrit une string suivie d'un retour a la ligne.
 * s  : La string a ecrire.
 * fd : Le file descriptor (1 = stdout, 2 = stderr, etc.).
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
