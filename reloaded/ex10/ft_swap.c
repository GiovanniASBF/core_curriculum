/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:58:32 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/10 14:58:33 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
#include <stdio.h>

int	main(void)
{
	int n1 = 10;
	int n2 = 14;
	int *p1 = &n1;
	int *p2 = &n2;
	printf("Value of n1: %i\n", n1);
	printf("Value of n2: %i\n", n2);
	ft_swap(p1, p2);
	printf("Value of n1: %i\n", n1);
	printf("Value of n2: %i\n", n2);
}
*/