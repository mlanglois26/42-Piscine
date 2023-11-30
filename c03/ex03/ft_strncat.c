/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malanglo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:31:10 by malanglo          #+#    #+#             */
/*   Updated: 2023/09/14 16:29:04 by malanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] > 0 && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    unsigned int nb = 3; // Maximum number of characters to concatenate

    printf("Before concatenation:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    ft_strncat(dest, src, nb);

    printf("\nAfter concatenation with %u characters:\n", nb);
    printf("dest: %s\n", dest);

    return 0;
}
*/
