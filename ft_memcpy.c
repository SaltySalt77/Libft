/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:55:07 by hyna              #+#    #+#             */
/*   Updated: 2021/11/10 18:50:51 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*tmp;
	size_t			pos;

	tmp = (unsigned char	*)dest;
	pos = 0;
	while (pos < n)
	{
		*(tmp + pos) = *((unsigned char	*) src + pos);
		pos++;
	}
	return (dest);
}
