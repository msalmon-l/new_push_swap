/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:27:21 by msalmon-          #+#    #+#             */
/*   Updated: 2022/06/29 21:28:26 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_len(const char *str);
static int	add_zeros(int valor, int potenciador);

int	ft_atoi(const char *str, t_list **lst)
{
	int		i;
	int		signo;
	int		len;
	long	result;

	i = 0;
	signo = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	len = get_len(&str[i]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result += add_zeros((str[i] - '0'), len);
		i++;
		len--;
	}
	if ((result * signo) < INT_MIN || (result * signo) > INT_MAX)
		ft_error(lst);
	return (result * signo);
}

static int	get_len(const char *str)
{
	int	i;

	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		i++;
		str++;
	}
	return (i);
}

static int	add_zeros(int valor, int potenciador)
{
	while (1 < potenciador)
	{
		valor = valor * 10;
		potenciador--;
	}
	return (valor);
}
