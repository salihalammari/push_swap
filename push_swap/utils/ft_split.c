/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:27:16 by slammari          #+#    #+#             */
/*   Updated: 2022/03/24 16:48:59 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_words(const char *str, char sp)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str != sp)
			str++;
		while (sp && *str && *str == sp)
			str++;
		count++;
	}
	return (count);
}

static char	*malloc_word(const char *str, char sp)
{
	char	*word;
	int		count;

	count = 0;
	while (str[count] && str[count] != sp)
		count++;
	word = (char *)malloc(sizeof(char) * (count + 1));
	if (word == 0)
		return (0);
	ft_strlcpy(word, str, count + 1);
	return (word);
}

static char	**ft_free(char **buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;

	if (str == 0)
		return (0);
	while (*str && *str == c)
		str++;
	tab = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (tab == 0)
		return (0);
	i = 0;
	while (*str)
	{
		tab[i] = malloc_word(str, c);
		if (tab[i] == NULL)
			return (ft_free(tab));
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
