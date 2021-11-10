/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:36:29 by hyna              #+#    #+#             */
/*   Updated: 2021/11/10 16:22:23 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	unsigned char	*tmp;
	size_t		pos;

	tmp = (unsigned char *)s;
	pos = 0;
	while (pos < n)
		tmp[pos++] = 0;
}
