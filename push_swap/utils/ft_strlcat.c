/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:24:48 by slammari          #+#    #+#             */
/*   Updated: 2022/03/23 16:46:24 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i1;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	i1 = 0;
	while (src[i1] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i1];
		i++;
		i1++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i1]));
}
