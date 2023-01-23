/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:57:27 by anawrozi          #+#    #+#             */
/*   Updated: 2022/10/20 09:57:53 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = (size * count);
	dst = malloc(tot_size);
	if (!(dst))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
