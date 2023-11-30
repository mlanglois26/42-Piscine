/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:36:23 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/28 18:48:08 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_word_len(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	ft_word_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		else if (i == 0 && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int	ft_alloc(char **sub, char *s, int *i, char c)
{
	int	k;

	k = 0;
	*sub = (char *)malloc(sizeof(char) * (ft_word_len(s, c) + 1));
	if (!(*sub))
		return (1);
	while (s[*i] != c && s[*i])
		(*sub)[k++] = s[(*i)++];
	(*sub)[k] = '\0';
	return (0);
}

char	**ft_strsplit(char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_word_count(s, c)));
	if (!tab)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (ft_alloc(tab + j, s, &i, c))
				return (0);
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

/*
int main()
{
    char str[] = "This,is,a,test,string";
    char delimiter = ',';

    char **tab = ft_strsplit(str, delimiter);

    if (tab)
    {	
	 int i = 0;
	 while (tab[i])
        {
            printf("Token %d: %s\n", i, tab[i]);
            i++;
        }
    }	
    return 0;
}
*/
