/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anawrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:58:09 by anawrozi          #+#    #+#             */
/*   Updated: 2022/10/20 09:58:27 by anawrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = *lst;
	if (!*lst)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		(*del)(*lst);
		*lst = current;
	}
	*lst = NULL;
}
