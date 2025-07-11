/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:23:42 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/10 16:31:28 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	aux;

	if (nb > 1)
	{
		aux = nb;
		while (nb > 1)
		{
			aux = aux * (nb - 1);
			nb--;
		}
		return (aux);
	}
	else
	{
		return (0);
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int result = ft_iterative_factorial(8);
	printf("Result: %i\n", result);
}
*/