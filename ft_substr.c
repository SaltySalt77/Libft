/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:14:45 by hyna              #+#    #+#             */
/*   Updated: 2021/12/09 16:07:38 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	pos;
	char	*tmp;

	pos = 0;
	if (!s)
		return (NULL);
	tmp = (char *) malloc(len + 1);
	if (!tmp)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		tmp[0] = 0;
		return (tmp);
	}
	while ((pos < len) && s[start])
	{
		tmp[pos] = s[start];
		pos++;
		start++;
	}
	tmp[pos] = 0;
	return (tmp);
}
