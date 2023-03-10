/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moviment_operations.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:56:51 by msalmon-          #+#    #+#             */
/*   Updated: 2022/06/15 21:03:57 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_swap(lst);
		write(1, "sa\n", 3);
	}
	else if (option == 'b')
	{
		ft_swap(lst_b);
		write(1, "sb\n", 3);
	}
	else if (option == 's')
	{
		ft_swap(lst);
		ft_swap(lst_b);
		write(1, "ss\n", 3);
	}
}

void	ft_push_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_push(lst, lst_b);
		write(1, "pa\n", 3);
	}
	else if (option == 'b')
	{
		ft_push(lst_b, lst);
		write(1, "pb\n", 3);
	}
}

void	ft_rotate_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_rotate(lst);
		write(1, "ra\n", 3);
	}
	else if (option == 'b')
	{
		ft_rotate(lst_b);
		write(1, "rb\n", 3);
	}
	else if (option == 'r')
	{
		ft_rotate(lst);
		ft_rotate(lst_b);
		write(1, "rr\n", 3);
	}
}

void	ft_reverse_option(t_list **lst, t_list **lst_b, char option)
{
	if (option == 'a')
	{
		ft_reverse_rotate(lst);
		write (1, "rra\n", 4);
	}
	else if (option == 'b')
	{
		ft_reverse_rotate(lst_b);
		write (1, "rrb\n", 4);
	}
	else if (option == 'r')
	{
		ft_reverse_rotate(lst);
		ft_reverse_rotate(lst_b);
		write (1, "rrr\n", 4);
	}
}

