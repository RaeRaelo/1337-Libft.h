/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:45:08 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/18 18:34:22 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (*little == '\0')
		return ((unsigned char *)big);
	while (big[i] && len > i)
	{
		j = 0;
		while (big[j + i] == little[j])
		{
			if (little[j] == '\0')
				return (&((char *)big)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char *b = "Hello my name is rae";
	char *f = "rae";
	printf("Output 1: %s\n", ft_strnstr(b, f, 21));
	printf("Output 2: %s\n", strstr(b, f));
}