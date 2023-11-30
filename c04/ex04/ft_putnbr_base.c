/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:54:29 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/18 20:24:53 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_valid_base(char *base);

void    ft_putchar(char a)
{
        write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
        int	base_len;

	if (!(ft_check_valid_base(base)))
		return;

	base_len = ft_strlen(base);
	if (nbr == -2147483648)
        {
                write(1, "-2147483648", 11);
        }

	else if (nbr < 0)
        {
                ft_putchar('-');
                nbr = -nbr;
        }

        if (nbr >= base_len)
        {
                ft_putnbr_base(nbr / base_len, base);
                ft_putchar(base[nbr % base_len]);
	}
        else
        {
                ft_putchar(base[nbr]);
        }
}

int	ft_check_valid_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}

	i = 0;
	while (base[i])
	{
		if ((base[i] == '+') || (base[i] == '-'))
		{
			return (0);
		}
		i++;
	}	
	
	while (base[i])
	j = i + 1;
	{
		while (base[j])
		{
			if (base[i] == base[j])
			{	
				return (0);
			}
			j++;
		}
		i++;
	}

	return (1);
}

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}
