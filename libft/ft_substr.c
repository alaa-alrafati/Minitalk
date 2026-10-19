/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:33:12 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/30 11:37:38 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	x;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
	{
		return (ft_strdup(""));
	}
	if (len > length - start)
		len = length - start;
	substr = (char *)malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0' && x < len)
	{
		substr[x] = s[start + x];
		x++;
	}
	substr[x] = '\0';
	return (substr);
}
/*int main()
{
    char s1[14] = "Hello everyone";
    char *subresult =  ft_substr(s1, 1, 10);
    printf("%s\n", subresult);
    free(subresult);
}*/
