/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 08:01:39 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/06 23:28:38 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(int i, int j, int argc, char *argv[])
{
	char	*p_1;
	char	*p_2;

	while (j < argc)
	{
		i = 0;
		while (++i < argc - j - 1)
		{
			p_1 = argv[i];
			p_2 = argv[i + 1];
			while (*p_1 && *p_2)
			{
				if (*p_1 > *p_2 || (!*(p_2 + 1) && (*p_1 == *p_2)))
				{
					ft_swap(&argv[i], &argv[i + 1]);
					break ;
				}
				else if (*p_1 < *p_2)
					break ;
				p_1++;
				p_2++;
			}
		}
		j++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	ft_sort_params(i, j, argc, argv);
	while (argv[++i])
		ft_putstr(argv[i]);
	return (0);
}
