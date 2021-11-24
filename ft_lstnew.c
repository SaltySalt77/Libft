/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:32:38 by hyna              #+#    #+#             */
/*   Updated: 2021/11/24 12:32:21 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*s_result;

	s_result = malloc(sizeof(t_list));
	if (!s_result)
		return (NULL);
	s_result->content = content;
	s_result->next = NULL;
	return (s_result);
}
