/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:35:19 by hyna              #+#    #+#             */
/*   Updated: 2021/11/26 15:28:02 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	unsigned char	*tmp;
	size_t			pos;

	tmp = (unsigned char *) s;
	pos = 0;
	while (pos < n)
	{
		if (tmp[pos] == (unsigned char) c)
			return ((void *) &tmp[pos]);
		pos++;
	}
	return (NULL);
}
