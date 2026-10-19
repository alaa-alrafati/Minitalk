/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:32:00 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 16:07:05 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (little[0] == '\0')
	{
		return ((char *)(&big[x]));
	}
	while (big[x] != '\0' && x < len)
	{
		y = 0;
		while (big[x + y] == little[y] && x + y < len)
		{
			if (little[y + 1] == '\0')
			{
				return ((char *)(big + x));
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
/*int main()
{
    char big1[] = "Alaa Mohammad Alrafati";
    char little1[] = "Mohammad";
    char * result = ft_strnstr(big1, little1, 13);
    if (result != NULL)
        printf("%s\n", result);
    else
            printf("%s\n", "NULL");
}*/
