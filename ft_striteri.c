/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:45:56 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/16 17:44:17 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int main() {
//     char original[] = "Never Lost Never Will";
//     printf("Original: %s\n", original);
//     ft_striteri(original, change);
//     printf("Result:   %s\n", original);
//     return (0);
// }
// //fix it not all the cases are working u fuking stupid
