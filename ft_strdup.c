/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:17:48 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/16 09:17:54 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main()
// {
// 	const char *s1 = NULL;
// 	char *ss1 = ft_strdup(s1);
// 	if (ss1 == NULL)
// 	{
// 		printf("the modification failed");
// 		return (1);
// 	}
// 	printf("%s", ss1);
// 	free(ss1);
// 	return (0);
// }
