/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:44:48 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/13 22:57:56 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && str[i] && to_find[c])
		{	
			c++;
			if (to_find[c] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
  char str[]="string to search";
  char to_find[]="ing";
  if (strstr(str, to_find)) puts("String found");
  printf("string a trouver = %s\n", strstr(str, to_find));
	
}
*/
