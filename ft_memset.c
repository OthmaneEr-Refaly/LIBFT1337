/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:51:04 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/06 10:10:56 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// #include<stdio.h>
// int main()
// {
// 	// int i = 0;
// 	int array[]={1,2,4};
// 	int *r = &array[2];
// 	ft_memset(r,26,2);
// 	ft_memset(r,42,1);
// 	printf("%d\n",*r);
// 	return (0);
// }
// }int main ()
// {
// 	int n = 0;

// 	ft_memset(&n,0,4);
// 	ft_memset(&n,26,2);
// 	ft_memset(&n,42,1);
// 	printf("%d\n",n);
// 	return (0);
// }
// int main()
// {
// 	int n = 0;
// 	ft_memset(&n,0,4);
// 	ft_memset(&n,7,2);
// 	ft_memset(&n,104,1);
// 	// int m = 1896;
// 	printf("%d\n",n);
// }
// #include <stdio.h>
// int	main(void)
// {
// 	int ptr[] = {11,2,2,4};
// 	int c = 'k';
// 	size_t len = 8;
// 	ft_memset(ptr, 1, 16);
// 	printf("%d",ptr[0]);
// 		printf("%d",ptr[1]);
// 			printf("%d",ptr[2]);
// 				printf("%d",ptr[3]);
// 	return (0);
// }
