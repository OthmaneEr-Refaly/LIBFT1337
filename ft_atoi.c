/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:16:22 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/05 21:32:06 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	neg_flag;
	int	result;

	i = 0;
	neg_flag = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'
			&& str[i] != '\0'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg_flag = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (neg_flag)
		return (-result);
	return (result);
}
// int main(void)
// {
// 	const char *str = "++01000";
// 	printf("%d \n", ft_atoi(str));
// 	printf("%d", atoi(str));
// 	return (0);
// }