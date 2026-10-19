/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:01:10 by aalrofat          #+#    #+#             */
/*   Updated: 2025/08/30 10:31:39 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_numb(int n)
{
	int		length;
	long	num;

	num = n;
	length = 0;
	if (num <= 0)
		length = 1;
	while (num != 0)
	{
		num = num / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*chnumber;
	int		length;
	int		x;
	long	num;

	num = n;
	length = length_numb(num);
	chnumber = (char *)malloc((length + 1) * sizeof(char));
	if (chnumber == NULL)
		return (NULL);
	chnumber[length] = '\0';
	if (num == 0)
		chnumber[0] = '0';
	if (num < 0)
	{
		chnumber[0] = '-';
		num *= -1;
	}
	x = length - 1;
	while (num > 0)
	{
		chnumber[x--] = num % 10 + '0';
		num = num / 10;
	}
	return (chnumber);
}
/*int main()
{
    int n1 = 0;
    char *thenumb = ft_itoa(n1);
    printf("%s\n", thenumb);
    free(thenumb);
}*/
