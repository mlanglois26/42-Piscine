/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:46:11 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/27 11:02:10 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dup;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*new;
	int					i;

	new = malloc((argc + 1) * sizeof(t_stock_str));
	if (!new)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		new[i].size = ft_strlen(argv[i]);
		new[i].str = argv[i];
		new[i].copy = ft_strdup(new[i].str);
		i++;
	}
	new[i].str = (NULL);
	return (new);
}
