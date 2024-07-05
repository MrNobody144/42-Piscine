/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/30 09:29:12 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_count;

	i = -1;
	dest_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while ((src[++i] != '\0') && (i < nb))
		dest[dest_count + i] = src[i];
	dest[dest_count + i] = '\0';
	return (dest);
}

/* int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	
	char *str = ft_strncat(str1, str2, 2);
	write(1, str, 10);
	return (0);
} */
