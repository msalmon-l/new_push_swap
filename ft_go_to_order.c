/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_go_to_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:45:27 by msalmon-          #+#    #+#             */
/*   Updated: 2022/06/15 21:03:52 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_go_to_order(t_list **lst, t_list **lst_b, int number)
{
	//printf("entra en go opciones\n");
	if (number < 4 && number > 1)
		ft_order_three(lst, number);
	else if (number < 6)
		ft_order_five(lst, lst_b, number);
	else
		ft_order_all(lst, lst_b, number);
}

void	ft_order_three(t_list **lst, int num)
{
	if ((*lst)->content > (*lst)->next->content)
		ft_swap_option(lst, NULL, 'a');
	if (num != 2 && (*lst)->content > (*lst)->next->next->content)
		ft_reverse_option(lst, NULL, 'a');
	if (num != 2 && (*lst)->next->content > (*lst)->next->next->content)
	{
		ft_reverse_option(lst, NULL, 'a');
		ft_swap_option(lst, NULL, 'a');
	}
}

void	ft_order_five(t_list **lst_a, t_list **lst_b, int num)
{
	int	i;

	i = 3;
	while (i++ < num)
		ft_search_min(lst_a, lst_b);
	ft_order_three(lst_a, 3);
	ft_push_option(lst_a, lst_b, 'b');
	ft_push_option(lst_a, lst_b, 'b');
	printf("\n COMPROBAR EL RESULTADO DE 4 O 5 \n");
	ft_lstprint((*lst_a));
	return ;
}

void	ft_search_min(t_list **lst_a, t_list **lst_b)
{
	t_list	*firts;
	t_list	*min_val;

	firts = (*lst_a);
	min_val = (*lst_a);
	while ((*lst_a))
	{
		if ((*lst_a)->content < min_val->content)
			min_val = (*lst_a);
		(*lst_a) = (*lst_a)->next;
	}
	(*lst_a) = firts;
	while (1 < 10)
	{
		if (min_val->content == (*lst_a)->content)
			break ;
		ft_rotate_option(lst_a, lst_b, 'a');
	}
	ft_push_option(lst_a, lst_b, 'a');
	return ;
}

void	ft_order_all(t_list **lst_a, t_list **lst_b, int number)
{
	int	round;
	int	i;

	if (!lst_a)
		return ;
	round = ft_get_round(number);
	i = 0;
	while (i < round)
	{
		//ft_(lst_a, lst_b, num, i); start to do this function
		i++;
	}
}



int	ft_get_round(int number)
{
	int i;

	i = 1;
	while (number >= 2)
	{
		number /= 2;
		i++;
	}
	printf("the round number is: %i\n", i);
	return (i);
}
/*
int main()
{
	int i;

	i = ft_get_round(3);
	i = ft_get_round(8);
	i = ft_get_round(16);
	i = ft_get_round(32);
	i = ft_get_round(64);
	i = ft_get_round(100);
	i = ft_get_round(200);
	i = ft_get_round(41);
	return 0;
}
*/
