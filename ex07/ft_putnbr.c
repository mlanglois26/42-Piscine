/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:30:10 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/08 11:05:52 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{	
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int	main(void)
{
	int	n;
	n = -254948977;
	ft_putnbr(n);
}
*/
