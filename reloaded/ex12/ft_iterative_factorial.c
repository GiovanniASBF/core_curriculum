/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:23:42 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/11 10:54:59 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb >= 1)
		{
			aux = nb * aux;
			nb--;
		}
		return (aux);
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