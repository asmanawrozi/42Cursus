/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:56:44 by anawrozi          #+#    #+#             */
/*   Updated: 2022/10/20 09:56:54 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *pagliaio, const char *ago, size_t len)
{
	size_t	p;
	size_t	a;

	p = 0;
	if (ago[0] == '\0')
		return ((char *)pagliaio);
	while (pagliaio[p] != '\0')
	{
		a = 0;
		while (pagliaio[p + a] == ago[a] && (p + a) < len)
		{
			if (pagliaio[p + a] == '\0' && ago[a] == '\0')
				return ((char *)&pagliaio[p]);
			a++;
		}
		if (ago[a] == '\0')
			return ((char *)pagliaio + p);
		p++;
	}
	return (0);
}
