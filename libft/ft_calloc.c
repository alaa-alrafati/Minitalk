/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:27:31 by aalrofat          #+#    #+#             */
/*   Updated: 2025/09/02 11:31:42 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pointer;
	size_t			tsize;
	void			*p;
	size_t			x;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		if (p == NULL)
			return (NULL);
		((unsigned char *)p)[0] = '\0';
		return (p);
	}
	if (size != 0 && (nmemb > SIZE_MAX / size))
		return (NULL);
	tsize = nmemb * size;
	p = malloc(tsize);
	x = 0;
	if (p == NULL)
		return (NULL);
	pointer = (unsigned char *)p;
	while (x < tsize)
		pointer[x++] = 0;
	return (pointer);
}
/*int main()
{
   int *p1 = ft_calloc(10, sizeof(int));
   for (int i = 0; i < 10; i++)
   {
     	printf("%i ", p1[i]);
   }
   printf("\n");
   free(p1);

	//if (p1 == NULL)
		//printf("NULL\n");
	//else
		//printf("No NULL %p\n", p1);
	//free(p1);
}*/
