/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 08:10:47 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/14 08:10:50 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len(int value)
{
	int	len;

	len = 0;
	if (value < 0)
	{
		value *= -1;
		len++;
	}
	if (value == 0)
		return (1);
	while (value)
	{
		value = value / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		sign = 1;
	}
	str[len] = '\0';
	len--;
	while (sign <= len)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -12422222;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }