/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:43:36 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/14 12:15:14 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main()
{
	char src[] = "Hello";
	char dest[10];
	ft_strncpy(dest, src, 8);
	printf("dest: \"%s\"\n", dest);
}

/*
int	main(void)
{	
	unsigned int	i;
	i = 0;
	char	src[3] = "hel";
	char	dest[3] = "ici";
	unsigned int n;
	n = 1;
	ft_strncpy(dest, src, n);
	printf("charactere a copier = %s\n", ft_strncpy(dest, src, 2));
}
*/
