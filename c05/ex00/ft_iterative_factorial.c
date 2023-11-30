/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:33:27 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/17 16:46:58 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	product;

	i = 1;
	product = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		product = product * i;
		i++;
	}
	return (product);
}

/*
int	main()
{
	int nb = 3;
	//ft_iterative_factorial(nb);
	printf("result = %d\n" , ft_iterative_factorial(nb));
}
*/
