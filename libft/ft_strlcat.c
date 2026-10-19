/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:09:16 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 13:45:59 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lengthsrc;
	size_t	lengthdst;
	size_t	x;
	size_t	z;

	lengthsrc = ft_strlen(src);
	lengthdst = 0;
	while (dst [lengthdst] != '\0' && lengthdst < size)
		lengthdst++;
	if (size == lengthdst)
		return (size + lengthsrc);
	x = 0;
	z = lengthdst;
	while (src[x] != '\0' && z < size - 1)
	{
		dst[z] = src[x];
		x++;
		z++;
	}
	dst[z] = '\0';
	return (lengthsrc + lengthdst);
}
/*int main ()
 {
    char src1[] = "alrafati";
    char dst1[20] = "alaa ";
    int totallength = ft_strlcat(dst1, src1, 0);
    printf("The string: %s\n", dst1);
    printf("the return total: %i\n", totallength);
 }*/
