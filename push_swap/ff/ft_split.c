/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:59:21 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/14 11:26:08 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (w);
}

static char	*ft_mem_word(char const *s, char c)
{
	int		i;
	char	*tab;

	i = 0;
	tab = 0;
	while (s[i] && s[i] != c)
		i++;
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s, i + 1);
	return (tab);
}

static char	**ft_free( char **tab, int i)
{
	while (i > 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

static char	**ft_rir_norm(char const *s, char c)
{
	int		i;
	int		words;
	char	**tab;

	i = 0;
	words = ft_count(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (i < words)
	{
		while (s[0] == c)
			s++;
		tab[i] = ft_mem_word(s, c);
		if (!tab)
		{
			return (ft_free(tab, i));
		}
		s += ft_strlen(tab[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_rir_norm(s, c));
}
