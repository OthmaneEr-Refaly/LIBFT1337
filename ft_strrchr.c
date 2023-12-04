/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:52:30 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/16 16:00:36 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = 0;
	len_s = ft_strlen(s);
	while (*s != '\0')
		s++;
	while (*(s - i) != (char)c)
	{
		if (i == len_s)
			return (0);
		i++;
	}
	return ((char *)(s - i));
}

// int main()
// {
//     const char *s = "othmane";
//     int c = 'a';
//     printf("%s",ft_strrchr(s,c));
//     return (0);
// }