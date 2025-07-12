/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:58:53 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/12 13:58:53 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*aux;
	int	i;
	int	*ptr;
	int	size;

	i = min;
	size = max - min;
	if (size <= 0)
	{
		return (NULL);
	}
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	aux = ptr;
	while (i <= size)
	{
		*ptr = i;
		i++;
		ptr++;
	}
	return (aux);
}

/*
#include <stdio.h>
int	main(void)
{
	int *res = ft_range(1, 15);
	int size = 15 - 1;
	int i = 0;
	while (i < size)
	{
		printf("%i\n", res[i]);
		i++;
	}
	printf("\n");
	free(res);
	res = NULL;
}
return an int array
this array must contain all values between the args min and max
min included
max excluded
if min == max
a null pointer must be retorned
*/