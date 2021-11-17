/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:19:24 by hyna              #+#    #+#             */
/*   Updated: 2021/11/17 15:29:56 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const *s2)
{
	char	*result;
	size_t	len;
	size_t	s1len;
	size_t	s2len;
	size_t	pos;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	len = s1len + s2len;
	result = (char *) malloc(len + 1);
	if (result == NULL)
		return (NULL);
	pos = -1;
	while (++pos < s1len)
		result[pos] = s1[pos];
	pos = 0;
	while (pos < s2len)
		result[s1len++] = s2[pos++];
	result[s1len] = 0;
	return (result);
}
