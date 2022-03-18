/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:15:56 by mfagri            #+#    #+#             */
/*   Updated: 2022/02/23 20:49:06 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct Stack
{
	int				top;
	int				*arry;
	unsigned int	capacity;
}t_p1;

size_t	ft_strlen(const	char *s);
char	*ft_strchr(char *s, int c);
void	ft_putstr(char *s);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*get_next_line(int fd);
void	rrotat(t_p1 *stack, char *s);
void	rotat_stack(t_p1 *stack, char *s);
void	push_top(t_p1 *stack1, t_p1 *stack2, char *s);
void	swap(t_p1 *stack, char *s);
void	o_double(t_p1 *a, t_p1 *b, int n, char *s);
t_p1	*creat_stack(unsigned int capacity);
int		*ft_swap(int *a, int *b);
int		is_get_min(t_p1 *stack);
int		is_sorted(t_p1 *stack);
int		*push(t_p1 *stack, int val);
int		*pop(t_p1 *stack);
void	sort_2(t_p1 *a);
void	sort3(t_p1 *stack);
void	sort5(t_p1 *a, t_p1 *b);
int		get_index(t_p1 *stack, int m);
int		is_double(char **t);
int		t_circle(t_p1 **stack, int n);
int		*the_long_list(t_p1 **a, int *p);
int		get_max_array(int arr[], int size);
int		get_index_max(int arr[], int size, int n);
int		is_in_arr(int arr[], int n, int size);
void	push_from_a_to_b(t_p1 **a, t_p1 **b);
void	mn_a_l_b(t_p1 **a, t_p1 **b, int nb);
void	sort_b_to_a(t_p1 *a, t_p1 *b);
int		get_next_nb(t_p1 *a, int nb);
int		get_min_index(int *arr, int size);
char	**push_in_t_stack(int ac, char **av, int *i);
#endif
