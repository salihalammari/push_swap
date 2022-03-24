/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smaller.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:43:04 by slammari          #+#    #+#             */
/*   Updated: 2022/03/23 18:39:51 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	sort5_2(t_stack *a, t_stack *b, int min)
{
	if (a->arry[1] == min)
	{
		rrotat(a, "rra\n");
		rrotat(a, "rra\n");
		push_top(a, b, "pb\n");
	}
	if (a->arry[0] == min)
	{
		rrotat(a, "rra\n");
		push_top(a, b, "pb\n");
	}
}

void	sort5(t_stack *a, t_stack *b)
{
	int	i ;
	int	min;

	i = -1;
	while (++i < 2)
	{
		min = is_get_min(a);
		if (a->arry[a->top] == min)
			push_top(a, b, "pb\n");
		if (a->arry[a->top - 1] == min)
		{
			swap(a, "sa\n");
			push_top(a, b, "pb\n");
		}
		if (a->arry[2] == min)
		{
			rotat_stack(a, "ra\n");
			swap(a, "sa\n");
			push_top(a, b, "pb\n");
		}
		sort5_2(a, b, min);
	}
	sort3(a);
	push_top(b, a, "pa\n");
	push_top(b, a, "pa\n");
}

void	sort3(t_stack *stack)
{
	int	*arr;

	arr = stack->arry;
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] < arr[0])
		swap(stack, "sa\n");
	else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
	{
		swap(stack, "sa\n");
		rrotat(stack, "rra\n");
	}
	else if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0])
		rotat_stack(stack, "ra\n");
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] < arr[0])
	{
		swap(stack, "sa\n");
		rotat_stack(stack, "ra\n");
	}
	else if (arr[0] < arr[1] && arr[1] > arr[2] && arr[2] > arr[0])
		rrotat(stack, "rra\n");
}

void	sort2(t_stack *a)
{
	if (a->arry[1] > a->arry[0])
		swap(a, "sa\n");
}
