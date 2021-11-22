/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyna <hyna@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:38:44 by hyna              #+#    #+#             */
/*   Updated: 2021/11/22 15:59:07 by hyna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	result_len(long long n)
{
	int	len;

	len = 1;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_rev(char	*tab, int size)
{
	char	temp;
	int		i;
	int		pos;

	i = size - 1;
	pos = 0;
	while (pos < size / 2)
	{
		temp = tab[pos];
		tab[pos] = tab[i];
		tab[i] = temp;
		i--;
		pos++;
	}
}

static void	make_result(long long n, char	*result, int pos)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
		i++;
		flag++;
	}
	while (i < pos)
	{
		result[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	ft_rev(result + flag, ft_strlen(result) - flag);
}

char	*ft_itoa(int n)
{
	char	*result;

	result = (char *) ft_calloc(result_len(n), sizeof(char));
	if (result == NULL)
		return (NULL);
	make_result(n, result, result_len(n) - 1);
	return (result);
}
/*
#include<stdio.h>

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(8124));
	printf("%s\n", ft_itoa(-9874));
	printf("%s\n", ft_itoa(543000));
	printf("%s\n", ft_itoa(-2147483648LL));
	printf("%s\n", ft_itoa(2147483647));

	return (0);
}*/
