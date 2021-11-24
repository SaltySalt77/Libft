/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:46:38 by hyna              #+#    #+#             */
/*   Updated: 2021/11/24 13:51:59 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!(lst->next))
			break ;
		lst = lst->next;
	}
	return (lst);
}
