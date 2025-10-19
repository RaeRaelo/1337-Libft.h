/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:58:50 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/19 14:01:34 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	dup = malloc((sizeof(char) * len) + 1);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[len + 1] = '\0';
	return (dup);
}
