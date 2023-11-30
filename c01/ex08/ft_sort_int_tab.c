/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:35:23 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/20 09:48:03 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		j++;
		}
	i++;
	}
}

/*
int	main()
{
	int tab[] = {0, 5, 1, 6, 2, 7, 3, 4, 6, 10};
	ft_sort_int_tab(tab, 10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], 
	tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
}
*/
