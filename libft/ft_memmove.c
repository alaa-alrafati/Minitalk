/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:14:40 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/27 12:12:30 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dst;
	size_t				x;

	source = (const unsigned char *)src;
	dst = (unsigned char *)dest;
	x = 0;
	if (dst < source)
	{
		while (x < n)
		{
			dst[x] = source[x];
			x++;
		}
	}
	else
	{
		x = n;
		while (x--)
			dst[x] = source[x];
	}
	return (dest);
}
/*int main()
{
	char src1[] = "Hello Guys!";
	char dest1[6];
	ft_memmove(dest1, src1, 5);
	dest1[5] = '\0';
	printf("%s \n", dest1);
}*/
