/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:57 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/20 15:13:59 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size != 0 && (count >= SIZE_MAX / size))
		return (NULL);
	s = malloc(count * size);
	if (s)
	{
		ft_bzero(s, count * size);
		return (s);
	}
	return (NULL);
}
// #include<stdio.h>
// // int main()
// {
// 	int *x;
// 	x= ft_calloc(1,4);
// 	printf("%d\n",*(x+0));
// 	printf("%d\n",*(x+1));
// 	printf("%d\n",*(x+2));
// 	printf("%d\n",*(x+3));
// 	x= calloc(1,4);
// 	printf("%d\n",*(x+0));
// 	printf("%d\n",*(x+1));
// 	printf("%d\n",*(x+2));
// 	printf("%d\n",*(x+3));
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     size_t count = 5;
//     size_t size = sizeof(int);
//     int *arr = (int *)ft_calloc(count, size);
// 	char *arr2 = (char *)arr;
//     if (arr2 != NULL)
//     {
//        size_t i = 0;
// 	   while (i < count)
//         {
//             printf("%d ", arr2[i]);
// 			i++;
//         }
//         printf("\n");
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }
