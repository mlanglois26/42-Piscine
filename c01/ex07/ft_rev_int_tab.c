/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:04:39 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/20 17:18:02 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
	i++;
	}
}

/*
int	main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};	
	ft_rev_int_tab(tab, 10);
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", tab[0], tab[1], tab[2], 
	tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
}
*/
