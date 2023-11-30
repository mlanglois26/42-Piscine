/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:47:18 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/22 13:17:40 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_case(char *final_string)
{
		final_string = malloc(1);
		final_string[0] = '\0';
	return (final_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		final_len;
	char	*final_string;

	i = 0;
	final_string = NULL;
	if (size == 0)
		return (ft_case(final_string));
	final_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		i++;
	}
	final_string = malloc(sizeof(char) * final_len + 1);
	i = 1;
	final_string[0] = 0;
	ft_strcat(final_string, strs[0]);
	while (i < size)
	{
		ft_strcat(final_string, sep);
		ft_strcat(final_string, strs[i]);
		i++;
	}
	return (final_string);
}

/*
int	main(int argc, char **argv)
{
	int	i;
	char *str = ft_strjoin(argc, argv, "&&&");


	i = argc - 1;
	if (argc >= 1)
	{	
		//char *str = ft_strjoin(argc, argv, "&&&");
	
		printf("%s\n", str);
		//free(str);
		//i++;
	}
}
*/
