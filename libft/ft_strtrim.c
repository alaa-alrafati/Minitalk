/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:54:47 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/30 11:38:00 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	start;
	size_t	end;
	size_t	tlength;
	size_t	x;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	tlength = end - start;
	trimstr = (char *)malloc((tlength + 1) * sizeof(char));
	if (trimstr == NULL)
		return (NULL);
	x = 0;
	while (x < tlength)
		trimstr[x++] = s1[start++];
	trimstr[x] = '\0';
	return (trimstr);
}
/*int main()
{
    char str1[] = " \n%Hello guys \n";
    char set1[] = " \n%";
    char *tresult = ft_strtrim(str1, set1);
    printf("%s\n", tresult);
    free(tresult);
}*/
