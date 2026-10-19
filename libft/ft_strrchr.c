/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:30:40 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 14:57:17 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	alph;
	int		x;

	alph = (char)c;
	x = 0;
	while (s[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (s[x] == alph)
		{
			return ((char *)(s + x));
		}
		x--;
	}
	if (alph == '\0')
	{
		return ((char *)(s + x));
	}
	return (NULL);
}
/*int main()
{
    char s1[] = "Hello alaa!";
    char *alph1 = ft_strrchr(s1, 'l');
    printf("%s\n", alph1);
}*/
