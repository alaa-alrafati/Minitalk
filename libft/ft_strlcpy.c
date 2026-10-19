/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 09:57:07 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 10:37:12 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size != 0)
	{
		while (src[x] != '\0' && x < size - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*int main()
{
    char src1[] = "Hello guys!";
    char dst1[0];
    size_t length = ft_strlcpy(dst1, src1, 0);
    printf("%s\n", dst1);
    printf("%ld\n", length);
}*/
