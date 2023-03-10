/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:49:48 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/10 18:14:04 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstprint(t_list *list)
{
	if (list == NULL)
		printf("la lista esta vacia\n");
//		return ((void) 0);
	while (list)
	{
		ft_putnbr_fd(list->content, 1);
		write(1, "\n", 1);
		if (list->next == NULL)
			break ;
		else
			list = list->next;
	}
	return ((void) 0);
}
