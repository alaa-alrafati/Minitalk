/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:50:52 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/27 11:59:14 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			x;

	str = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
		{
			return (str + x);
		}
		x++;
	}
	return (NULL);
}
/*int main ()
{
    char s1[] = "Hello Everyone";
    char *result = ft_memchr(s1, 'l', 5);
    printf("%s\n", result);
}*/
