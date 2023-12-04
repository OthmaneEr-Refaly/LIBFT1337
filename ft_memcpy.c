/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:50:41 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/06 13:05:19 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (0);
	if (dst == src)
		return (dst);
	pdst = dst;
	psrc = src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	unsigned char dst[] = "othmane";
// 	unsigned const char src[] = "oo";
// 	char *arr = ft_memcpy(dst, src, 2);
// 	printf("%s", arr);
// 	return (0);
// }