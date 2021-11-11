/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:01:31 by hyna              #+#    #+#             */
/*   Updated: 2021/11/11 18:20:55 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size)
{
	size_t	pos;

	pos = 0;
	while ((src[pos]) && (pos + 1 < size))
	{	
		dst[pos] = src[pos];
		pos++;
	}
	dst[pos] = 0;
	while (src[pos])
		pos++;
	return (pos);
}
