/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:07:53 by anawrozi          #+#    #+#             */
/*   Updated: 2022/10/20 10:08:08 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*suc;

	i = 0;
	suc = (unsigned char *)s;
	while (i < n)
	{
		suc[i] = c;
		i++;
	}
	return (s = suc);
}
