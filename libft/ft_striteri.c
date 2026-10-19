/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:00:44 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/16 10:41:05 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[x] != '\0')
	{
		f(x, &s[x]);
		x++;
	}
}
/*void    f1(unsigned int i, char *str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str -= 32;
        }
    }
int main()
{
    char s1[] = "alaa";
    ft_striteri(s1, f1);
    printf("%s\n", s1);
}*/
