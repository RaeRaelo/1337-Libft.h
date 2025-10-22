/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahadda <adahadda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:47:35 by adahadda          #+#    #+#             */
/*   Updated: 2025/10/22 21:57:37 by adahadda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count (const char *s, char c)
{
	size_t	i;
	size_t	c;

	c = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			c++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (c);
}

static size_t	size_till_sep(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static int	**panic_exit

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	char	**dArray;

	i = 0;
	dArray = (char **)malloc(sizeof(char *) * size + 1);
	if (!dArray)
		return (NULL);
	while (s[i])
	

}