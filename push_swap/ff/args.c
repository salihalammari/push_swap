/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:23:52 by mfagri            #+#    #+#             */
/*   Updated: 2022/02/24 19:39:32 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_tab(char **t)
{
	int	i;
	int	j;

	i = 0;
	while (t[i])
	{
		j = 0;
		while (t[i][j])
		{
			if (t[i][j] == '-' || t[i][j] == '+')
				j++;
			if (!ft_isdigit(t[i][j]) || is_double(t) == 0
				|| ft_atoi(&t[i][j]) <= -2147483648
				|| ft_atoi(&t[i][j]) >= 2147483647)
				return (0);
			while (ft_isdigit(t[i][j]) == 1)
			{
				if (t[i][j + 1] == '-' || t[i][j + 1] == '+')
					return (0);
				j++;
			}
		}
		i++;
	}
	return (1);
}

static	size_t	count_espace(char *av)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		if (av[i] == 32)
			j++;
		i++;
	}
	return (j);
}

static	int	check_args(char **v)
{
	int	i;

	i = 1;
	while (v[i])
	{
		if (ft_strlen(v[i]) == count_espace(v[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**args(int ac, char **av)
{
	char	**t;
	char	*s;
	char	*arg;
	int		i;

	i = 1;
	s = (char *)malloc(1 * sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '\0';
	if (check_args(av) == 0)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	while (i < ac)
	{
		arg = ft_strjoin(s, av[i++]);
		free (s);
		s = ft_strjoin(arg, " ");
		free(arg);
	}
	t = ft_split(s, ' ');
	free (s);
	return (t);
}

char	**push_in_t_stack(int ac, char **av, int *i)
{
	char	**tab;

	if (ac <= 1)
		exit (1);
	tab = args(ac, av);
	if (check_tab(tab) == 0)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	while (tab[*i])
	{
		(*i)++;
	}
	return (tab);
}
