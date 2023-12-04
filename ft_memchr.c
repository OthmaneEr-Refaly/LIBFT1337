/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:31:17 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/07 09:07:14 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*uchar_s;

	uchar_s = s;
	i = 0;
	while (i < n)
	{
		if (uchar_s[i] == (unsigned char)c)
		{
			return ((void *)&uchar_s[i]);
		}
		i++;
	}
	return (NULL);
}
// #include<stdio.h>

// int	main(void)
// {
// 	unsigned char s[] = "TestingIt";
// 	int c = 'i';
// 	size_t n = 5;
// 	printf("%s",ft_memchr(s,c,n));
// 	return (0);
// }
