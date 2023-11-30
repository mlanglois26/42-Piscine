/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:00:49 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/11 10:12:28 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z' )))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main()
{
	int 	i;
	i = 0;
	char	str[1] = "";
	ft_str_is_uppercase(str);
	printf("result = %d\n", ft_str_is_uppercase(str));
}
*/
