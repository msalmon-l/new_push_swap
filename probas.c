/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:56:51 by msalmon-          #+#    #+#             */
/*   Updated: 2022/05/27 20:57:12 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int main()
{
	t_list *lista;
	t_list *b;
	int x = 0;
	lista = ft_lstnew(2);
	printf("antes de añadir\n");
	ft_lstadd_back(&lista, ft_lstnew(3));
	ft_lstadd_back(&lista, ft_lstnew(4));
	ft_lstadd_back(&lista, ft_lstnew(5));
	ft_lstadd_back(&lista, ft_lstnew(6));
	ft_lstadd_back(&lista, ft_lstnew(7));
	ft_swap(&lista);
	
	ft_lstprint(lista);
//	b = ft_lstnew(455);
	b = NULL;	
	ft_push(&b, &lista);
	ft_push(&b, &lista);
	int i = ft_lstsize(lista);
	printf("*********PILA 1**********\n");
	ft_lstprint(lista);
	printf("***b***\n");
	ft_lstprint(b);	
	x = 0;
	printf("*********rotate**********\n");
	ft_rotate(&lista);
	ft_lstprint(lista);
		
	printf("*********rotate reverse**********\n");
	ft_reverse_rotate(&lista);
	ft_lstprint(lista);
	
	printf("en el main -- la cadena es:%d\n", lista->content);
	int a = ft_lstsize(lista);
	printf("el numero es:%d\n", a);
}
