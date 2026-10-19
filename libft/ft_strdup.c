/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:46:06 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/30 11:21:42 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ma;
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	ma = (char *)malloc((x + 1) * sizeof(char));
	if (ma == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		ma[x] = s[x];
		x++;
	}
	ma[x] = '\0';
	return (ma);
}
/*int main()
{
    char s1[] = "Hello guys!";
    char *cs2 = ft_strdup(s1);
    printf("%s\n", cs2);
    free (cs2);
}*/
