/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:40:30 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/10 15:40:31 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include<stdio.h>
int main(void)
{
	int inter;
	int rest;
	ft_div_mod(25, 3, &inter, &rest);
	printf("Divisao: %i, Resto: %i\n", inter, rest);
}
*/