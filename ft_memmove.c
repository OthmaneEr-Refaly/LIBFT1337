/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:50:52 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/06 20:37:07 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;
	size_t				i;

	pdst = dst;
	psrc = src;
	if (!pdst && !psrc)
		return (NULL);
	if (pdst == psrc)
		return (pdst);
	if (pdst < psrc)
		ft_memcpy(dst, src, n);
	else if (pdst > psrc)
	{
		i = n;
		while (i > 0)
		{
			pdst[i - 1] = psrc[i - 1];
			i--;
		}
	}
	return (dst);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char src[] = "NotGreatAtAll";
// 	char dst[20];
// 	size_t n = 14;
// 	printf("%s",ft_memmove(dst, src, n));
// 	return (0);
// }
