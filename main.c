/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:02:29 by msalmon-          #+#    #+#             */
/*   Updated: 2023/03/10 20:28:06 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*pila_a;
	t_list	*pila_b;
	
	pila_a = NULL;
	pila_b = NULL;
	if (argc < 2)
		return (0);
	printf("Entra en el main\n");
	ft_check_values(argc, argv, &pila_a);
	ft_put_position(t_list	**lst, int num);
	//ft_lstprint(pila_a);
	printf("despues de coger los datos  main\n");
	//if (argc < 5)
	int order = ft_is_order(pila_a);
	if (order == 1)
		return (0);
	ft_go_to_order(&pila_a, &pila_b, argc - 1);
	ft_lstprint(pila_b);
	printf("fin de la prueba de la funcion, esta ordenado =%i\n", order);
	return (0);

}
