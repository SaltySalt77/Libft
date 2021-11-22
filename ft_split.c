/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:14:09 by hyna              #+#    #+#             */
/*   Updated: 2021/11/22 14:37:09 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const	*s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (s[i])
	{
		while (s[i] && (s[i] != c))
			i++;
		if (s[i] && (s[i] == c))
			count++;
		while (s[i] && (s[i] == c))
			i++;
	}
	return (count);
}

static char	*word_split(char const	*s, char c, int *j)
{
	int	i;

	while (s[*j] && (s[*j] == c))
		(*j)++;
	i = *j;
	while (s[*j] && (s[*j] != c))
		(*j)++;
	return (ft_substr(s, i, *j - i));
}

char	**ft_split(char const	*s, char c)
{
	char	**result;
	int		j;
	int		k;
	int		count;

	j = 0;
	k = 0;
	if ((s == NULL) || (c == 0))
		return ((char **) ft_calloc(1, sizeof(char)));
	count = word_count(s, c);
	result = (char **) ft_calloc(count + 1, sizeof(char));
	if (!(result))
		return (NULL);
	while (k < count)
	{
		result[k] = word_split(s, c, &j);
		if (!(result[k]))
			return (NULL);
		k++;
	}
	return (result);
}
/*
#include<stdio.h>

int	main()
{
	char	str[] = "why i don't know";
	char	**strstr;
	int		i;

	i = 0;
	strstr = ft_split(str, 32);
	while (strstr[i])
	{
		printf("%s\n", strstr[i]);
		i++;
	}
	while (i >= 0)
	{
		free(strstr[i]);
		i--;
	}
	return (0);
}*/
