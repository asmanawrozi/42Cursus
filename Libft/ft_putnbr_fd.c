/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:09:40 by anawrozi          #+#    #+#             */
/*   Updated: 2022/11/02 09:57:41 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	t;

	t = n;
	if (t < 0)
	{
		t *= -1;
		ft_putchar_fd('-', fd);
	}
	if (t > 9)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putchar_fd((t % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((t + '0'), fd);
}
