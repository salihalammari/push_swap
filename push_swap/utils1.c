/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:52:28 by slammari          #+#    #+#             */
/*   Updated: 2022/03/24 18:15:33 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*creat_stack(unsigned int capacity)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(*stack));
	if (!(stack))
		return (NULL);
	stack->capacity = capacity;
	stack->top = -1;
	stack->arry = malloc(capacity * sizeof(*(stack->arry)));
	if (!(stack->arry))
		return (NULL);
	return (stack);
}

int	*ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
	return (0);
}

int	get_index(t_stack *stack, int m)
{
	int	i;

	i = 0;
	while (stack->arry[i] != m)
	{
		i++;
	}
	return (i);
}

int	is_sorted(t_stack *stack)
{
	int	i;
	int	nb;

	i = 0;
	nb = stack->arry[i];
	while (i <= stack->top)
	{
		if (nb < stack->arry[i])
			return (0);
		nb = stack->arry[i];
		i++;
	}
	return (1);
}

int	is_double(char **t)
{
	int	i;
	int	j;

	i = 0;
	while (t[i])
	{
		j = i + 1;
		while (t[j])
		{
			if (ft_atoi(t[i]) == ft_atoi(t[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
