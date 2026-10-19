/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 09:54:30 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/27 12:40:16 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			x;

	dest = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		dest[x] = (unsigned char)c;
		x++;
	}
	return (s);
}
/*int main()
{
    char s1[4];
    ft_memset(s1, '0', 4);
	for (int i = 0; i < 4; i++)
		printf("%c ", s1[i]);
	printf("\n");
}*/
