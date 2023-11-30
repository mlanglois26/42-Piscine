/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:03:23 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/19 14:43:51 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb && i <= ft_sqrt(nb) / 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
