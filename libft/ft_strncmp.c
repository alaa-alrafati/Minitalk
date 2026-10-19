/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:17:15 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 14:08:38 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && x < n)
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	if (x < n)
		return ((unsigned char)s1[x] - (unsigned char)s2[x]);
	return (0);
}
/*int main()
{
    char a1[] = "ABE";
    char a2[] = "ABEE";
    int conclusion = ft_strncmp(a1, a2, 4);
    printf("%d\n", conclusion);
}*/
