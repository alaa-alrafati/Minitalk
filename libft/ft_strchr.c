/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 09:30:49 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 14:34:37 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	alp;
	int		x;

	alp = (char)c;
	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == alp)
		{
			return ((char *)(s + x));
		}
		x++;
	}
	if (alp == '\0')
	{
		return ((char *)(s + x));
	}
	return (NULL);
}
/*int main()
{
    char s1[] = "Hello Guys!";
    char *alp1 = ft_strchr(s1, 'l');
    printf("%s\n", alp1);
}*/
