/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:40:32 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/18 14:18:57 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int ch)
{
	const char *last = NULL;
	
	while (*str)
	{
		if (*str == (char)ch)
			last = str;
		str++;
	}
	if (ch == '\0')
		return (char *)str;
	return (char *)last;
}

int main()
{
	char x[] = "hello,my,name,saad";
	printf("%s\n", ft_strrchr(x, ','));
}