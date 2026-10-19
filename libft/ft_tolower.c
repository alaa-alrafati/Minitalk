/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:57:29 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/06 15:11:40 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c += 32);
	}
	else
	{
		return (c);
	}
}
/*int main()
{
    int c1 ='A';
    int lower = ft_tolower(c1);
    printf("lower is: %c\n", lower);
}*/
