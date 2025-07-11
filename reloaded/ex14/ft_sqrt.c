/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:23:45 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/11 11:23:46 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (aux * aux <= nb)
	{
		if (aux * aux == nb)
		{
			return (aux);
		}
		aux++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int res = ft_sqrt(36);
	printf("Result: %i\n", res);
}
*/