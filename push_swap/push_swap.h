/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:48:55 by slammari          #+#    #+#             */
/*   Updated: 2022/03/23 17:09:47 by slammari         ###   ########.fr       */
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
}t_stack;

size_t	ft_strlen(const	char *s);
char	*ft_strchr(char *s, int c);
void	ft_putstr(char *s);
long	ft_atoi(const char *str);
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
void	rrotat(t_stack *stack, char *s);
void	rotat_stack(t_stack *stack, char *s);
void	push_top(t_stack *stack1, t_stack *stack2, char *s);
void	swap(t_stack *stack, char *s);
void	o_double(t_stack *a, t_stack *b, int n, char *s);
t_stack	*creat_stack(unsigned int capacity);
int		*ft_swap(int *a, int *b);
int		is_get_min(t_stack *stack);
int		is_sorted(t_stack *stack);
int		*push(t_stack *stack, int val);
int		*pop(t_stack *stack);
void	sort2(t_stack *a);
void	sort3(t_stack *stack);
void	sort5(t_stack *a, t_stack *b);
int		get_index(t_stack *stack, int m);
int		is_double(char **t);
int		t_circle(t_stack **stack, int n);
int		*the_long_list(t_stack **a, int *p);
int		get_max_array(int arr[], int size);
int		get_index_max(int arr[], int size, int n);
int		is_in_arr(int arr[], int n, int size);
void	push_from_a_to_b(t_stack **a, t_stack **b);
void	from_a_to_b(t_stack **a, t_stack **b, int nb);
void	sort_b_to_a(t_stack *a, t_stack *b);
int		get_next_nb(t_stack *a, int nb);
int		get_min_index(int *arr, int size);
char	**push_in_t_stack(int ac, char **av, int *i);

#endif
