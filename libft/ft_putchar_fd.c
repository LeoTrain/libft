/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:40:52 by leberton          #+#    #+#             */
/*   Updated: 2025/04/27 21:41:29 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putchar_fd ecrit un caractere sur le file descriptor donne.
 * c  : Le caractere a ecrire.
 * fd : Le file descriptor (1 = stdout, 2 = stderr, etc.).
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
