/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:45:10 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/16 10:38:38 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*s2;

	x = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	while (s[x] != '\0')
	{
		x++;
	}
	s2 = (char *)malloc((x + 1) * sizeof(char));
	if (s2 == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (s[x] != '\0')
	{
		s2[x] = f(x, s[x]);
		x++;
	}
	s2[x] = '\0';
	return (s2);
}
/*char    ftest(unsigned int i, char string2)
{
    if(string2 >= 'a' && string2 <= 'z')
        return (string2 -= 32);
}
int main()
{
    char    string1[] = "AlaA";
    char    *result = ft_strmapi(string1, ftest);
    printf("%s\n", result);
    free(result);
}*/
