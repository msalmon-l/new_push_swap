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

#include "push_swap"

void	ft_put_position(t_list **lst, int num)
{
	int		i;
	t_list	*lista;
	t_list	*smaller;
	t_list	*last_smaller;

	i = 0;
	lista = NULL;
	smaller = NULL;
	last_smaller = NULL;
	if (!lst)
		return ;
	lista = (*lst);
	smaller = (*lst);
	while (i < num)
	{
		i++;
	}
}

