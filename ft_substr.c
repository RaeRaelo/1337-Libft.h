/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:54:50 by adahadda          #+#    #+#             */
/*   Updated: 2025/11/01 18:40:15 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*ss;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (malloc(1));
	ss = malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return ((char *)ss);
}
