/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_ft_strcapitalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:40:07 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/21 11:54:39 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// mettre em maj chaque 1er et le reste du mot em min
// la maj doit apparaitre apres un char special ou espace

#include <stdio.h>

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (*str);
}

int	must_become_maj(char *str, int i)
{
	if (i == 0)
                return (1);
	else if (str[i - 1] >= 9 && str[i - 1] <= 47)
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
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (must_become_maj(str, i))
		{
			str[i] -= 32;
		}
		else 
		{
			i++;
		}
	i++;
	}
	return (str);
}


int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("new = %s\n", ft_strcapitalize(argv[1]));
}
