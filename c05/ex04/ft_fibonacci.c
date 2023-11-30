/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:53:25 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/18 13:24:56 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1 || n == 2)
		return (1);
	else
		return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}

/*
int	main(void)
{
	printf("-1:%d\n", ft_fibonacci(-15));
	printf("0:%d\n", ft_fibonacci(0));
	printf("1:%d\n", ft_fibonacci(1));
	printf("1:%d\n", ft_fibonacci(2));
	printf("2:%d\n", ft_fibonacci(3));
	printf("55:%d\n", ft_fibonacci(10));
}
*/
