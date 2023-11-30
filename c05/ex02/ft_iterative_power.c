/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:59:41 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/18 20:42:44 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 <= power)
	{
		product = product * nb;
		power--;
	}
	return (product);
}

/*
int	main(void)
{
	printf("0:%d\n", ft_iterative_power(1, -10));
	printf("1:%d\n", ft_iterative_power(1, 1));
	printf("1:%d\n", ft_iterative_power(10, 0));
	printf("10:%d\n", ft_iterative_power(10, 1));
	printf("100:%d\n", ft_iterative_power(10, 2));
	printf("216:%d\n", ft_iterative_power(6, 3));
}
*/
