/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:36:36 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/14 16:20:55 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	x;
	int	num;
	int	fnum;

	x = 0;
	num = 1;
	fnum = 0;
	while ((nptr[x] >= 9 && nptr[x] <= 13) || (nptr[x] == 32))
	{
		x++;
	}
	if (nptr[x] == '+' || nptr[x] == '-')
	{
		if (nptr[x] == '-')
			num *= -1;
		x++;
	}
	while (nptr[x] >= 48 && nptr[x] <= 57)
	{
		fnum = fnum * 10 + (nptr[x] - 48);
		x++;
	}
	return (fnum * num);
}
/*int main()
{
    char nptr1[] = "--24alaa";
    int z = ft_atoi(nptr1);
    printf("%d\n", z);
}*/
