/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyns@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:10:43 by hyna              #+#    #+#             */
/*   Updated: 2021/11/10 17:53:04 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<string.h>

size_t	ft_strlen(const char	*s);
void	ft_bzero(void	*s, size_t	n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void	*dest, const void	*src, size_t	n);
void	*ft_memmove(void	*dest, const void	*src, size_t	n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

#endif
