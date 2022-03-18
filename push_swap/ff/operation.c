/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:28:22 by mfagri            #+#    #+#             */
/*   Updated: 2022/02/19 21:22:02 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*push(t_p1 *stack, int val)
{
	if (stack->top == (int)(stack->capacity - 1))
		return (0);
	stack->arry[++stack->top] = val;
	return (&stack->arry[stack->top]);
}

int	*pop(t_p1 *stack)
{
	if (stack->top == -1)
		return (0);
	return (&stack->arry[stack->top--]);
}
