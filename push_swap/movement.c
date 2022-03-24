/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:13:35 by slammari          #+#    #+#             */
/*   Updated: 2022/03/23 17:04:07 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, char *s)
{
	if (stack->top == 0 || stack->top == -1)
		return ;
	ft_swap(&stack->arry[stack->top], &stack->arry[stack->top - 1]);
	if (!s)
		return ;
	ft_putstr(s);
}

void	push_top(t_stack *stack1, t_stack *stack2, char *s)
{
	if (stack1->top == -1)
		return ;
	stack2->arry[++stack2->top] = stack1->arry[stack1->top--];
	if (!s)
		return ;
	ft_putstr(s);
}

void	rotat_stack(t_stack *stack, char *s)
{
	int	tmp ;
	int	i;

	tmp = stack->arry[stack->top];
	i = stack->top + 1;
	while (--i)
	{
		stack->arry[i] = stack->arry[i - 1];
	}
	stack->arry[0] = tmp;
	if (!s)
		return ;
	ft_putstr(s);
}

void	rrotat(t_stack *stack, char *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->arry[0];
	while (i < stack->top)
	{
		stack->arry[i] = stack->arry[i + 1];
		i++;
	}
	stack->arry[stack->top] = tmp;
	if (!s)
		return ;
	ft_putstr(s);
}

void	o_double(t_stack *a, t_stack *b, int n, char *s)
{
	if (n == 1)
	{
		rrotat(a, 0);
		rrotat(b, 0);
	}
	else if (n == 2)
	{
		rotat_stack(a, 0);
		rotat_stack(b, 0);
	}
	else if (n == 3)
	{
		swap(a, 0);
		swap(b, 0);
	}
	if (!s)
		return ;
	ft_putstr(s);
}
