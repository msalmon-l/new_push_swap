/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:15 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/10 20:10:34 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
//# include "./libft/libft.h"

typedef struct s_list
{
	int		content;
	int		pos;
	int		binari;	//esta variable es temporal, la eliminaremos cuando trabajemos a con bitwise para hacer las comparaciones.
	struct	s_list	*next;
}	t_list;

void	ft_free(t_list	**list);
void	ft_lstprint(t_list *list);
t_list	*ft_lstnew(int	num, int position); //hecho
void	ft_lstadd_front(t_list **lst, t_list *new); //creo que no es necesario
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list **lst, t_list	*new);
int		ft_lstsize(t_list *lst);
void	ft_putnbr_fd(int n, int fd);
void	ft_put_position(t_list **lst, int num);

int		ft_atoi(const char *str, t_list **lst);
void	ft_error();
void	ft_swap(t_list  **sa);
void	ft_push(t_list **pila_firts, t_list **pila_add);
void	ft_rotate(t_list **pila);
void	ft_reverse_rotate(t_list **pila);
void	ft_check_values(int argc, char **argv, t_list **list);
int		ft_is_order(t_list *lst);
void	ft_go_to_order(t_list **lst, t_list **lst_b, int number);
//void	ft_order_three(t_list **lst);
void	ft_swap_option(t_list **lst, t_list **lst_b, char option);
void	ft_push_option(t_list **lst, t_list **lst_b, char option);
void	ft_rotate_option(t_list **lst, t_list **lst_b, char option);
void	ft_reverse_option(t_list **lst, t_list **lst_b, char option);
void	ft_order_three(t_list **lst, int num);
void	ft_order_five(t_list **lst_a, t_list **lst_b, int num);
//herramienta de algorithmo de 5
void	ft_search_min(t_list **lst_a, t_list **lst_b);
#endif
