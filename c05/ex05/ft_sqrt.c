/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:29:35 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/18 23:39:13 by malanglo         ###   ########.fr       */
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

/*
int     main(void)
{
        printf("10:%d\n", ft_sqrt(100));
        printf("6:%d\n", ft_sqrt(36));
        printf("0:%d\n", ft_sqrt(37));
        printf("100:%d\n", ft_sqrt(10000));
        printf("0:%d\n", ft_sqrt(10001));
        printf("2000:%d\n", ft_sqrt(2147483647));
        printf("0:%d\n", ft_sqrt(-36));
}
*/
