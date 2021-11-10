/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:57:22 by hyna              #+#    #+#             */
/*   Updated: 2021/11/10 20:22:26 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	destsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (destsize <= i)
		len = destsize;
	else
		len = i;
	while (src[j] && (i + 1 < destsize))
		dest[i++] = src[j++];
	dest[i] = 0;
	while (src[j])
		j++;
	return (len + j);
}
