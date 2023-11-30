/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:57:40 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/11 17:49:09 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int a = 56;
	int b = 7;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("produit de la division = %d, produit du modulo = %d", *div, *mod);
}
*/
