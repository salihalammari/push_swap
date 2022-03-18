/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:40:48 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/08 17:58:33 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		b;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen(s1);
	c = ft_strlen(s2);
	a = (char *)malloc((b + c + 1) * sizeof(char));
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1, b + 1);
	ft_strlcat(&a[ft_strlen(a)], s2, c + 1);
	return (a);
}
