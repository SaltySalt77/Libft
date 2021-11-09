/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:36:29 by hyna              #+#    #+#             */
/*   Updated: 2021/11/09 18:43:24 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void	*s, size_t	n)
{
	unsigned char	*temp;
	size_t		pos;

	temp = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		temp[pos] = 0;
		pos++;
	}
}
