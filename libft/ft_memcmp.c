/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:10:47 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/25 18:41:18 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*v1;
	const unsigned char	*v2;
	size_t				x;

	v1 = (const unsigned char *)s1;
	v2 = (const unsigned char *)s2;
	x = 0;
	while (x < n)
	{
		if (v1[x] != v2[x])
		{
			return (v1[x] - v2[x]);
		}
		x++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "ABC";
    char str2[] = "ABCE";
    int result = ft_memcmp(str1, str2, 4);
    printf("%d\n", result);
}*/
