/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:10:16 by slammari          #+#    #+#             */
/*   Updated: 2022/03/20 18:37:07 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*push(t_stack *stack, int val)
{
	if (stack->top == (int)(stack->capacity - 1))
		return (0);
	stack->arry[++stack->top] = val;
	return (&stack->arry[stack->top]);
}

int	*pop(t_stack *stack)
{
	if (stack->top == -1)
		return (0);
	return (&stack->arry[stack->top--]);
}
