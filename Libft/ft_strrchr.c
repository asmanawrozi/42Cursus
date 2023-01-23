/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:59:55 by anawrozi          #+#    #+#             */
/*   Updated: 2022/11/02 10:17:54 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i++;
	while (--i)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
