/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:00:24 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/06 10:34:08 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1 = s1;
	const unsigned char	*ss2 = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
		{
			return (ss1[i] - ss2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include"string.h"
// int	main(void)
// {
// 	char src[] = "hello";
// 	char dest[] = "aaa";
// 	printf("%d\n",ft_memcmp(src, dest, 3));
//     printf("%d\n",memcmp(src, dest, 3));
// 	return (0);
// }