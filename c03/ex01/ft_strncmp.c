/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:40:10 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/14 22:58:12 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && (i + 1 < n))
		i++;
	return (s1[i] - s2[i]);
}

/*
int 	main()
{
	unsigned int	i;
	i = 0;
	unsigned int n;
	n = 2;
	char s1[] = "heva";
	char s2[] = "hella";
	
	printf("Difference sur n est de : %d\n", ft_strncmp(s1, s2, n));
}
*/
