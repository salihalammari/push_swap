/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:27:37 by mfagri            #+#    #+#             */
/*   Updated: 2022/02/23 20:31:54 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

static	int	ft_strcmp(char *s, char *p)
{
	int	i;

	i = 0;
	while (s[i] && p[i] && s[i] == p[i])
		i++;
	return (s[i] - p[i]);
}

static	void	ft_get_moves(char *s, t_p1 *a, t_p1 *b)
{
	if (ft_strcmp(s, "sa\n") == 0)
		swap(a, 0);
	else if (ft_strcmp(s, "ra\n") == 0)
		rotat_stack(a, 0);
	else if (ft_strcmp(s, "rra\n") == 0)
		rrotat(a, 0);
	else if (ft_strcmp(s, "sb\n") == 0)
		swap(b, 0);
	else if (ft_strcmp(s, "rb\n") == 0)
		rotat_stack(b, 0);
	else if (ft_strcmp(s, "rrb\n") == 0)
		rrotat(b, 0);
	else if (ft_strcmp(s, "ss\n") == 0)
		o_double(a, b, 3, 0);
	else if (ft_strcmp(s, "rr\n") == 0)
		o_double(a, b, 2, 0);
	else if (ft_strcmp(s, "rrr\n") == 0)
		o_double(a, b, 1, 0);
	else if (ft_strcmp(s, "pb\n") == 0)
		push_top(a, b, 0);
	else if (ft_strcmp(s, "pa\n") == 0)
		push_top(b, a, 0);
	else
		ft_error();
}

int	main(int ac, char **av)
{
	int		i;
	char	**tab;
	char	*s;
	t_p1	*a;
	t_p1	*b;

	tab = push_in_t_stack(ac, av, &i);
	a = creat_stack(i);
	b = creat_stack(i);
	i = i - 1;
	while (i >= 0)
		push(a, ft_atoi(tab[i--]));
	while (1)
	{
		s = get_next_line(0);
		if (s == NULL)
			break ;
		ft_get_moves(s, a, b);
		free(s);
	}
	if (is_sorted(a) == 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}
