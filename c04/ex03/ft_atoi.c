/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:16:53 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/21 12:07:13 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	status;

	nb = 0;
	i = 0;
	status = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
		{
			status = status * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * status);
}
/*
int	main()
{
	char str[] = " ---+--+1234ab567";
	printf("Nouvelle valeur = %d\n", ft_atoi(str));
}
*/
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("result = %d\n", ft_atoi(argv[1]));
}
*/
