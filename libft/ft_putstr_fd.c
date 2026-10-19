/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:43:08 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/27 11:39:09 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (s == NULL)
	{
		return ;
	}
	while (s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
}
/*int main()
{
    char s1[] = "alaa";
    ft_putstr_fd(s1, 1);
}*/
