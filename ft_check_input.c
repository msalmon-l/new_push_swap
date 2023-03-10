/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:29 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/10 20:28:08 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_duplicate_inputs(t_list **pila, int n);
static void	ft_check_inputs(const char *str);

void	ft_check_values(int argc, char **argv, t_list **list)
{
	printf("entra en el check y count es:%i\n", argc);
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_check_inputs(argv[i]);
		if (i == 1)
			(*list) = ft_lstnew(ft_atoi(argv[i], list), i);
		else
			ft_lstadd_back(list, ft_lstnew(ft_atoi(argv[i], list), i - 1));
/*		printf("imprimimos pos: %i y tambien valor %s\n", i, argv[i]);
		printf("imprimimos la lista resultande de esta vuelta \n");
		ft_lstprint(*list);*/
		i++;
	}
	ft_check_duplicate_inputs(list, argc - 1);
	printf("sale del check!!\n");
}

int	ft_is_order(t_list *lst)
{
	t_list	*next;
	int		i;

	next = NULL;
	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		next = lst->next;
	//	printf("la comparacion es: %i y %i\n", lst->content, next->content);
		if (lst->content > next->content)
		{
			i = 0;
			break ;
		}
		lst = lst->next;
	}
	return (i);
}

static void	ft_check_duplicate_inputs(t_list **pila, int n)
{
	int		x;
	int		y;
	t_list	*next;
	t_list	*firts_position;

	x = 0;
	next = (*pila)->next;
	firts_position = (*pila);
	while (x++ < n)
	{
		y = x + 1;
		while (pila && y++ < n)
		{
			if ((*pila)->content == next->content)
			{
				(*pila) = firts_position;
				ft_error(pila);
				return ;
			}
			if (next->next != NULL)
				next = next->next;
		}
		if ((*pila)->next != NULL)
		{
			(*pila) = (*pila)->next;
			next = (*pila)->next;
		}
	}
	(*pila) = firts_position;
	
	return ;
}

static void	ft_check_inputs(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{	
	//	ft_error();
		write(2, "Error\n", 6);
		exit(0);
	}
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || ((str[i] == '+' || str[i] == '-')
				&& (str[i + 1] >= '0' && str[i + 1] <= '9'))))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
	return ;
}

