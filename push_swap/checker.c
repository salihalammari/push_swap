/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:38:16 by slammari          #+#    #+#             */
/*   Updated: 2022/03/11 20:43:05 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  void    ft_error(void)
{
    write(2, "error\n", 6);
    exit(1);
}   

static  int ft_strcmp(char *str, char *ptr)
{
    int i;
    
    i = 0;
    while(str[i] && ptr[i] && str[i] == ptr[i])
        i++;
    return(str[i] - ptr[i]);
}

static  void    ft_moves(char *s, t_stack *a, t_stack *b)
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

int main(int ac, char **av)
{
    s = get_next_line(0);
    if(s == NULL)
        write(1, "OK\n", 3);
    else
        write(1, "KO\n", 3);
}