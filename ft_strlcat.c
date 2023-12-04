/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:51:36 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/16 16:54:43 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;
	size_t	j;
	size_t	dstlen;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src + dstsize));
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dstlen)
		return (srclen + dstsize);
	i = 0;
	j = srclen + dstlen;
	while (src[i] != '\0' && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (j);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	// char src[] = "greatlife";
// 	// char dst[20];
// 	// size_t size = 0;
// 	// printf("%zu\n",ft_strlcat(NULL,"HELLO",1));
// 	printf("%zu",strlcat(NULL,"HELLO",1));
// 	return (0);
// }
