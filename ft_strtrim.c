/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:36:33 by hyna              #+#    #+#             */
/*   Updated: 2021/11/17 16:44:20 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < ft_strlen(s1))
	{
		if (!(ft_strchr(set, s1[i])))
			len++;
		i++;
	}
	tmp = (char *) ft_calloc(len + 1, len + 1);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (j < len)
	{
		if (!(ft_strchr(set, s1[i])))
			tmp[j++] = s1[i];
		i++;
	}
	return (tmp);
}
