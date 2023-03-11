/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:10:46 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/10 20:27:52 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_position(t_list **lst, int num)
{
	int	i;
	t_list	*lista;
	t_list	*biggest;
	t_list	*smaller;
	t_list	*last_smaller;

	i = 0;
	lista = NULL;
	smaller = NULL;
	last_smaller = NULL;
	biggest = NULL;
	if (!lst)
		return ;
	biggest	= ft_max_value(lst);
	printf("the biggest is: %i and the number of elements are %i\n", biggest->content, num);
	while (i < num)
	{
		lista = (*lst);
		smaller = biggest;
		while (lista)
		{
			if ((smaller->content > lista->content) && (!last_smaller || lista->content > last_smaller->content))
			{
				smaller = lista;
				printf("smaller is: %i and i is: %i\n", smaller->content, i);
			}
			lista = lista->next;
		}
		smaller->pos = i;
		last_smaller = smaller;
		i++;
	}
}

t_list	*ft_max_value(t_list **lst)
{
	t_list	*max;
	t_list	*list;

	if (!lst)
		return (0);
	max = (*lst);
	list = (*lst);
	while (list)
	{
		if (list->content > max->content)
			max = list;
		list = list->next;
	}
	return (max);
}
