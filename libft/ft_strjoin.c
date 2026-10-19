/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:37:59 by aalrofat          #+#    #+#             */
/*   Updated: 2026/01/03 11:26:43 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	x;
	size_t	y;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		newstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
		newstr[x++] = s2[y++];
	newstr[x] = '\0';
	return (newstr);
}
/*int main()
{
    char str1[] = "Hello ";
    char str2[] = "Guys";
    char *new = ft_strjoin(str1, str2);
    printf("%s\n", new);
    free(new);
}*/
