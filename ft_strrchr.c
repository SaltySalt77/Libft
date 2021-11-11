/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:24:28 by hyna              #+#    #+#             */
/*   Updated: 2021/11/11 22:35:45 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	pos;
	
	pos = ft_strlen(s) - 1;
	while ((pos >= 0) && (s[pos] != c))
		pos--;
	if (s[pos] == c)
		return ((char	*) &s[pos]);
	return (NULL);
}
