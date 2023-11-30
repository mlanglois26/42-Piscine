/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:00:52 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/21 12:14:54 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
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
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/*
int	main()
{
	int nb = -54896723;
	ft_putnbr(nb);
	printf("Result = %d\n", nb);
}
*/

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	ft_putnbr(nb);
	void(argv);
	printf("result = %d\n", ft_putnbr(argv[1]));
}
