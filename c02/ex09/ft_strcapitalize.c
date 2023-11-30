/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:36:01 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/12 21:47:10 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_turn_min(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_turn_maj(char *str, int i)
{
	if (i == 0)
		return (1);
	else if (str[i - 1] >= 32 && str[i - 1] <= 47)
		return (1);
	else if (str[i - 1] >= 58 && str[i - 1] <= 64)
		return (1);
	else if (str[i - 1] >= 91 && str[i - 1] <= 96)
		return (1);
	else if (str[i - 1] >= 123 && str[i - 1] <= 127)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_turn_maj(str, i))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (ft_turn_min(str, i))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
	i++;
	}
	return (str);
}

/*
int	main(int argv, char **argc)
{
	if (argv < 2)
		return (1);
	printf("%s", ft_strcapitalize(argc[1]));
}
*/
