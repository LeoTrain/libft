/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:42:29 by leberton          #+#    #+#             */
/*   Updated: 2025/04/28 07:04:45 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putnbr_fd ecrit un entier sur le file descriptor donne.
 * Gere INT_MIN en cas special, puis recursion pour les autres nombres.
 * n  : L'entier a ecrire.
 * fd : Le file descriptor (1 = stdout, 2 = stderr, etc.).
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}
