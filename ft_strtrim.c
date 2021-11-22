/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:36:33 by hyna              #+#    #+#             */
/*   Updated: 2021/11/22 11:06:05 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, (int) s1[i]))
		i++;
	if (i == ft_strlen(s1))
		return ((char *) calloc(1, sizeof(char)));
	while (s1[j] && ft_strrchr(set, (int) s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
