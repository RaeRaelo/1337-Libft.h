/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:23:46 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/29 17:29:12 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (psrc < pdst)
	{
		i = n;
		while (i-- > 0)
		{
			pdst[i] = psrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
