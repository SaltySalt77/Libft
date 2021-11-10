/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:14:14 by hyna              #+#    #+#             */
/*   Updated: 2021/11/10 19:02:35 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			pos;

	tmpdest = (unsigned char *) dest;
	tmpsrc = (unsigned char *) src;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	if (dest < src)
	{
		pos = 0;
		while (pos < n)
		{
			tmpdest[pos] = tmpsrc[pos];
			pos++;
		}
	}
	else
	{
		pos = n;
		while (pos)
		{
			tmpdest[pos - 1] = tmpsrc[pos - 1];
			pos--;
		}
	}
	return (dest);
}
