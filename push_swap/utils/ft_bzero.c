/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:31:28 by slammari          #+#    #+#             */
/*   Updated: 2022/03/11 16:45:04 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    
    i = 0;
    while(i < n)
    {
        ((char *)s)[i] = '\0';
        i++;
    }
}