/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:49:20 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/12 12:55:25 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*aux;
	char	*ptr;

	ptr = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	aux = ptr;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (aux);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	char	*res = ft_strdup("Testando again");
	char	*primeres = res;
	printf("Copia: ");
	while (*res)
	{
		printf("%c", *res);
		res++;
	}
	printf("\n");
	free(primeres);
	res = NULL;
}
	
Why does primeres exist?
Because inside the loop, I move the pointer.
So when I call free(),
I'm not freeing a pointer pointing to the entire block of memory allocated
I'm freeing a pointer that is pointing the end of that block

Why does free() only work on the original pointer?

free() internally relies on the memory block’s starting address 
to correctly release the entire block.

When you pass a pointer that’s not the beginning of the block, 
the memory manager cannot identify the block to free it correctly, 
causing the "invalid pointer" error.
*/
