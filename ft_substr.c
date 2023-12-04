/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:41:26 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/13 09:32:55 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len2;
	size_t	i;

	len2 = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	len2 = ft_strlen(s);
	if (start >= len2 || len == 0)
		return (ft_strdup(""));
	if (len > len2 - start)
		len = len2 - start;
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// #include <stdio.h>
// #include <strings.h>
// int	main(void)
// {
// 	char const s[] = "a";
// 	unsigned int start = 1;
// 	printf("%s",ft_substr(s, start, 1));
// 	return(0);
// }
