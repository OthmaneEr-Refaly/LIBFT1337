/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:04:43 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:47 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len1 = 0;
	len2 = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	i += ft_strlcpy(ptr + i, s1, len1 + 1);
	i += ft_strlcpy(ptr + i, s2, len2 + 1);
	ptr[len1 + len2] = '\0';
	return (ptr);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char s1[] = "GreatLife";
// 	char s2[] = "TwoTimes";
// 	printf("%s\n",ft_strjoin(s1,s2));
// 	return (0);
// }
