/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:09:21 by hyna              #+#    #+#             */
/*   Updated: 2021/11/12 13:30:30 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			pos;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	pos = 0;
	while ((tmp1[pos]) && (pos < n))
	{
		if (tmp1[pos] != tmp2[pos])
			return (tmp1[pos] - tmp2[pos]);
		pos++;
	}
	return (0);
}
