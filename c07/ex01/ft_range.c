/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:56:22 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/22 09:43:28 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		range;
	int		*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	range = max - min;
	tab = malloc(sizeof(int) * range);
	if (!tab)
		return (NULL);
	while (i < range)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
int	main()
{
	int *tab;
	int min = 5;
	int max = 10;
	tab = ft_range(min, max);
	printf("result = %d, %d, %d, %d, %d ", tab[0], tab[1], tab[2], 
			tab[3], tab[4]);
}
*/
