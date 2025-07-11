void ft_putchar(char c);

int main(int argc, char *argv[])
{
	int		checksize;
	int		i;
	int		j;
	int		k;
	char	*temp;
	char	*aux1;
	char	*aux2;

	i = 1;
	j = i + 1;
	k = 1;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			aux1 = &argv[i];
			aux2 = &argv[j];
			while (*aux1 || *aux2)
			{
				if (*aux1 != *aux2)
				{
					checksize = *aux1 - *aux2;
				}
				aux1++;
				aux2++;
			}
			if (checksize > 0)
			{
				*temp = argv[i];
				argv[i] = argv[j];
				argv[j] = *temp;
			}

			j++;
		}
		i++;
	}

	while (k < argc)
	{
		while (*argv[k])
		{
			ft_putchar(*argv[k]);
			argv[k]++;
		}
		ft_putchar('\n');
		k++;
	}
}

/*
A ideia aqui é misturar os 2 últimos exercicios + ordenação de lista
na vdd não foi entregue uma lista, então não haverá nenhuma ordenação

devo percorrer o argv
utilizar o strcmp entre o primeiro argv e todos os demais
no caso da resposta for positivo, devo sinalizar que o s2 do momento vem na frente
em seguida devo passar a comparar o s2 com os demais a partir dele
esse processo vai se repetir até que se encerre os argvs

agora esse processo todo deve reiniciar, porém sem considerar o primeiro de todos
*/