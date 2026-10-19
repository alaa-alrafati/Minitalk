/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:22:58 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/06 15:01:04 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c -= 32);
	}
	else
	{
		return (c);
	}
}
/*int main ()

{
    char c1 = 'A';
    char upper = ft_toupper(c1);
    printf("the upper: %c\n", upper);
}*/
