/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:31:55 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/31 08:51:03 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	size_t	i;
	t_list	*tmp;

	if (!lst || !f)
		return ;
	i = 0;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
		i++;
	}
}
