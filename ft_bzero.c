/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:46:58 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/06 10:22:52 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	char ptr[] = "alhamdulilah";
// 	size_t n = 0;
// 	size_t i = 0;
// 	while (ptr[i] && i < n ){
// 	printf("%c", ptr[i]);
// 	i++;}
// 	return (0);
// }
