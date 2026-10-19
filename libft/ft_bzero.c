/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 09:17:49 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/28 15:09:23 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;
	char	*z;

	z = (char *)s;
	x = 0;
	while (x < n)
	{
		z[x] = '\0';
		x++;
	}
}
/*int main()
{
    char ex[7] = "HEllo!";
    ft_bzero(ex, 7);
  	printf("%s\n", ex);
}*/
