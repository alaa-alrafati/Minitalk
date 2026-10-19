/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:01:42 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/30 10:23:27 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dst;
	size_t				x;

	source = (const unsigned char *)src;
	dst = (unsigned char *)dest;
	x = 0;
	while (x < n)
	{
		dst[x] = source[x];
		x++;
	}
	return (dest);
}
/*int main()
{
    char s1[6] = "A B C";
    char dst1[6];
    ft_memcpy(dst1, s1, 6);
    printf("%s\n", dst1);
}*/
