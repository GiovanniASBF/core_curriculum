/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:11:10 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/11 16:52:11 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	aux;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		aux = nb * ft_recursive_factorial(nb - 1);
		return (aux);
	}
}

/*
#include <stdio.h>
int main(void)
{
	int result;
	result = ft_recursive_factorial(6);
	printf("Resposta: %i\n", result);
}
*/