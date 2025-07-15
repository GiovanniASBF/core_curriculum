/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:38:16 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/15 13:38:17 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;
	int	len;

	count = 0;
	i = 0;
	len = arraylen(tab);
	while (len > 0)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		len--;
		i++;
	}
	return (count);
}

int	arraylen(char **arr)
{
	int	i;

	i = 0;
	while (*arr)
	{
		i++;
		arr++;
	}
	return (i);
}

/*
A função recebe um array de strings
e uma função B.
Aparentemente essa função B retornará um valor numérico
para cada string que ele recebe
A função retornará o número de vezes que a função B retornou 1 
*/