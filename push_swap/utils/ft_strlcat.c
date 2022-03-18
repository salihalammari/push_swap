/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:24:48 by slammari          #+#    #+#             */
/*   Updated: 2022/03/11 18:36:46 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include < push_swap.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = 0;
	j = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (!src)
		return (0);
	if (j >= dstsize || dstsize == 0)
		return (srclen + dstsize);
	while (i < srclen && i < (dstsize - j - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + srclen);
}