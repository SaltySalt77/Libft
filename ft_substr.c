/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:14:45 by hyna              #+#    #+#             */
/*   Updated: 2021/11/16 19:51:35 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	pos;
	size_t	tmpsize;
	char	*tmp;

	pos = 0;
	if (ft_strlen(s) - start < len)
		tmpsize = ft_strlen(s) - start;
	else
		tmpsize = len;
	tmp = (char *) malloc(len + 1);
	while (pos < tmpsize)
	{
		tmp[pos] = s[start];
		pos++;
		start++;
	}
	tmp[pos] = 0;
	return (tmp);
}
