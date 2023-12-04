/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-refa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:04:34 by oer-refa          #+#    #+#             */
/*   Updated: 2023/11/12 12:04:37 by oer-refa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wordlength(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s && *s != c)
	{
		counter++;
		s++;
	}
	return (counter);
}

static int	count_words(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

static char	*ft_strduup(const char *str, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (ptr != NULL)
	{
		while (i < size)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[size] = '\0';
		return (ptr);
	}
	return (NULL);
}

static char	**ft_free_arr(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		counter;
	char	**ptr;
	int		i;
	int		wrlen;

	if (s == NULL)
		return (NULL);
	counter = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (counter + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < counter)
	{
		while (*s && *s == c)
			s++;
		wrlen = wordlength(s, c);
		ptr[i] = ft_strduup(s, wrlen);
		if (ptr[i] == NULL)
			return (ft_free_arr(ptr, i));
		s += wrlen;
		i++;
	}
	ptr[counter] = NULL;
	return (ptr);
}
// int main()
// {
//     const char *s = "@hello@world@great@shit@here@";
//     char c = '@';

//     char **result = ft_split(s, c);
//     if (result != NULL)
//     {
//         int i = 0;
//         while (result[i] != NULL)
//         {
//             printf("%s\n", result[i]);
//             i++;
//         }
//         while (result[i] != NULL)
// 		{
//             free(result[i]);
// 			i++;
// 		}
//         free(result);
//     }

//     return (0);
// }