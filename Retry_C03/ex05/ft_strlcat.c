/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/01/30 15:23:23 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_count;
	unsigned int	src_count;

	i = -1;
	dest_count = 0;
	src_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (size == 0 || dest_count > size)
		return (dest_count + size);
	else if (size == dest_count)
	{
		dest[dest_count] = '\0';
		return (dest_count + src_count);
	}
	while (src[++i] != '\0' && (i < (size - dest_count - 1)))
		dest[dest_count + i] = src[i];
	dest[dest_count + i] = '\0';
	return (dest_count + src_count);
}

/* int main()
{
	char str1[] = "1337 ";
	char str2[] = "42Born t";

	int len = ft_strlcat(str1, str2, 3) + 48;
	write(1, &len, 1);
	write(1, "\n", 2);
	write(1, str1, 10);
	return (0);
} */
