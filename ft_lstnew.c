/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:52:27 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/07 19:50:53 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int num)
{
	t_list	*nuevo;

	if (!num)
		return (0);
	nuevo = malloc(sizeof(t_list));
	nuevo->content = num;
	nuevo->pos = 0;
	return (nuevo);
}

