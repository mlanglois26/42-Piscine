/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:48:39 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/09 18:00:32 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}

/*
int	main(void)
{
	int a = 'n';
	int b = 'x';
	ft_ultimate_div_mod(&a, &b);
	printf("result de la div = %d, result du modulo = %d", *a, *b);

}
*/
